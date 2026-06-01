__int64 __fastcall sub_8C8EC0(__int64 *a1, const void **a2, __int64 a3)
{
  char *v3; // r13
  char *v4; // rbx
  unsigned int v5; // r13d
  unsigned int v7; // eax
  _BYTE *v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  _BYTE *v19; // [rsp+18h] [rbp-60h]
  _BYTE *v20; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v20 = v3;
  v4 = &v3[a3];
  if ( !__CFADD__(v3, a3) )
  {
    v21[0] = v3;
    v7 = unpack_dd(v21);
    v8 = (_BYTE *)v21[0];
    v9 = v7;
    v20 = (_BYTE *)v21[0];
    if ( (unsigned __int64)v3 < v21[0] )
    {
      v10 = v7;
      if ( v7 != a1[3] )
      {
        v19 = (_BYTE *)v21[0];
        sub_8B63A0(a1 + 2, v7);
        v8 = v19;
      }
      if ( v9 )
      {
        v11 = 32 * v10;
        v12 = 0;
        while ( (unsigned __int8)sub_8C3840(v12 + a1[2], (const void **)&v20, v4 - v8) )
        {
          v12 += 32;
          if ( v11 == v12 )
            goto LABEL_12;
          v8 = v20;
        }
      }
      else
      {
LABEL_12:
        LOBYTE(v13) = sub_7BFDB0(v21, (unsigned __int64 *)&v20);
        v5 = v13;
        if ( (_BYTE)v13 )
        {
          v14 = LODWORD(v21[0]);
          v17 = v21[0];
          sub_8C8A90(a1 + 5, LODWORD(v21[0]));
          if ( !v17 )
          {
LABEL_17:
            *a2 = v20;
            return v5;
          }
          v15 = 0;
          v16 = 80 * v14;
          while ( 1 )
          {
            v18 = v15;
            if ( !sub_8C6F00(a1[5] + v15, (const __m128i **)&v20, v4 - v20) )
              break;
            v15 = v18 + 80;
            if ( v16 == v18 + 80 )
              goto LABEL_17;
          }
        }
      }
    }
  }
  return 0;
}

