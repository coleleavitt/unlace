unsigned __int64 __fastcall sub_3C1C20(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  size_t v19; // r13
  __int64 v20; // r12
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 i; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  bool v27; // [rsp+Fh] [rbp-859h]
  unsigned __int64 v28; // [rsp+18h] [rbp-850h]
  _BYTE s1[1024]; // [rsp+20h] [rbp-848h] BYREF
  _BYTE v30[1032]; // [rsp+420h] [rbp-448h] BYREF
  unsigned __int64 v31; // [rsp+828h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v5 = a4;
  if ( a4 < a3 )
  {
    v8 = nbits(a2);
    v9 = v8 + 14;
    v10 = v8 + 7;
    if ( v10 < 0 )
      v10 = v9;
    v11 = v10 >> 3;
    if ( !v11 || !v5 || is_mul_ok(v5, v11) )
    {
      v12 = nbits(a2);
      v13 = v12 + 14;
      v14 = v12 + 7;
      if ( v14 >= 0 )
        v13 = v14;
      v15 = v5 * (v13 >> 3);
      if ( v15 <= 0x400 )
      {
        v16 = 0;
        if ( v15 )
          v16 = sub_3BFA20(a1, s1, v15, a2, 0, 0);
        v17 = 2 * v5;
        if ( 2 * v5 < a3 )
        {
          v18 = v5;
          if ( v15 )
          {
            v27 = v15 == v16;
            v19 = v15;
            v20 = v16;
            v28 = a2;
            v21 = v17 + a2 - v5;
            v22 = 2 * v5;
            v23 = v5;
            for ( i = sub_3BFA20(a1, v30, v19, v21, 0, 0); ; i = sub_3BFA20(a1, v30, v19, v26, 0, 0) )
            {
              if ( v27 != (i == v19) )
              {
LABEL_23:
                v18 = v23;
                goto LABEL_24;
              }
              if ( v19 == v20 )
              {
                if ( memcmp(s1, v30, v19) )
                  goto LABEL_23;
                v25 = v5 + v22;
                if ( v5 + v22 >= a3 )
                {
LABEL_33:
                  v17 = v22;
                  goto LABEL_29;
                }
                v26 = v28 + v22;
              }
              else
              {
                v25 = v5 + v22;
                if ( v5 + v22 >= a3 )
                  goto LABEL_33;
                v26 = v28 + v22;
              }
              v23 = v22;
              v22 = v25;
            }
          }
          if ( v16 )
          {
LABEL_24:
            v5 = v18;
          }
          else
          {
            while ( v5 + v17 < a3 )
              v17 += v5;
LABEL_29:
            v5 = v17;
          }
        }
      }
    }
  }
  result = a3;
  if ( v5 <= a3 )
    return v5;
  return result;
}
