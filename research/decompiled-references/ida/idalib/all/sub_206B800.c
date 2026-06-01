__int64 __fastcall sub_206B800(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  int v4; // r8d
  unsigned int v5; // r15d
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int8 **v12; // r14
  unsigned __int8 **v13; // [rsp+0h] [rbp-68h]
  __m128 v14; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 v15; // [rsp+20h] [rbp-48h]

  if ( a4 )
  {
    v4 = *a4;
    if ( (unsigned int)(v4 - 5) <= 0x20 )
    {
      if ( (_BYTE)v4 == 6 || sub_A5F460(a2, (__int64)a4) )
        return 1;
      if ( sub_A5F460(a3, (__int64)a4) )
      {
        sub_206B630(&v14, a1, (__int64)a4);
        v5 = v15;
        if ( v15 )
        {
          v9 = *(a4 - 16);
          if ( (v9 & 2) != 0 )
          {
            v10 = *((_QWORD *)a4 - 4);
            v11 = *((unsigned int *)a4 - 6);
          }
          else
          {
            v11 = (*((_WORD *)a4 - 8) >> 6) & 0xF;
            v10 = (__int64)&a4[-8 * ((v9 >> 2) & 0xF) - 16];
          }
          v13 = (unsigned __int8 **)(v10 + 8 * v11);
          if ( v13 == (unsigned __int8 **)v10 )
          {
LABEL_17:
            sub_206B630(&v14, a2, (__int64)a4);
            return v5;
          }
          v12 = (unsigned __int8 **)v10;
          while ( a4 == *v12 || (unsigned __int8)sub_206B800(a1, a2, a3) )
          {
            if ( v13 == ++v12 )
              goto LABEL_17;
          }
        }
      }
    }
  }
  return 0;
}
