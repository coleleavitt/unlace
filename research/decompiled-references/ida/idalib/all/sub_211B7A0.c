__int64 __fastcall sub_211B7A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int8 **v4; // rbp
  __int64 v5; // kr00_8

  result = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)result )
  {
    v3 = 16LL * (unsigned int)(result - 1);
    do
    {
LABEL_4:
      result = v3 + *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)result == 5 )
      {
        v4 = *(unsigned __int8 ***)(result + 8);
        while ( 2 )
        {
          v5 = result;
          result = *(unsigned __int8 *)v4;
          switch ( *(_BYTE *)v4 )
          {
            case 0:
              result = sub_211A5A0(a1, v4[2]);
              v4 = (unsigned __int8 **)v4[3];
              continue;
            case 2:
              result = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
              if ( (void (*)())result == nullsub_1427 )
                goto LABEL_3;
              v3 -= 16;
              result = ((__int64 (__fastcall *)(__int64, unsigned __int8 *))result)(a1, v4[2]);
              if ( v3 == -16 )
                return result;
              goto LABEL_4;
            case 3:
            case 4:
              v4 = (unsigned __int8 **)v4[2];
              continue;
            case 5:
              result = (*((__int64 (__fastcall **)(unsigned __int8 *, __int64))*(v4 - 1) + 7))(
                         (unsigned __int8 *)v4 - 8,
                         a1);
              goto LABEL_3;
            default:
              result = v5;
              goto LABEL_3;
          }
        }
      }
LABEL_3:
      v3 -= 16;
    }
    while ( v3 != -16 );
  }
  return result;
}
