/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1D00
// Address: 0x00000000000C1D00

//----- (00000000000C1D00) ----------------------------------------------------
__int64 __fastcall sub_C1D00(__int64 result)
{
  __int64 *v1; // x19
  __int64 *v2; // x21
  __int64 v3; // x8
  sem_t *v4; // x0
  int stat_loc; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v6; // [xsp+8h] [xbp-38h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (__int64 *)(result + 24);
  v2 = *(__int64 **)(result + 24);
  if ( (__int64 *)(result + 24) != v2 )
  {
    do
    {
      if ( !*((_BYTE *)v2 + 40) )
      {
        result = *((unsigned int *)v2 + 4);
        if ( (_DWORD)result != -1 )
        {
          result = waitpid(result, &stat_loc, *((_DWORD *)v2 + 7) | 1);
          if ( (_DWORD)result )
          {
            if ( (int)result < 1 )
            {
              if ( (_DWORD)result == -1 )
              {
                result = __errno(result);
                if ( *(_DWORD *)result == 10 )
                  *((_BYTE *)v2 + 24) = 1;
              }
            }
            else
            {
              *((_DWORD *)v2 + 5) = stat_loc;
            }
            v3 = v2[4];
            *((_BYTE *)v2 + 40) = 1;
            if ( !v3 )
              goto LABEL_18;
LABEL_14:
            v4 = (sem_t *)(v3 + 24);
            if ( *(_QWORD *)(v3 + 8) > 1u )
              v4 = (sem_t *)v4->__align;
            result = sem_post(v4);
            goto LABEL_18;
          }
          if ( *((_BYTE *)v2 + 41) )
          {
            v3 = v2[4];
            *((_BYTE *)v2 + 41) = 0;
            if ( v3 )
              goto LABEL_14;
          }
        }
      }
LABEL_18:
      v2 = (__int64 *)*v2;
    }
    while ( v1 != v2 );
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
