__int64 __fastcall sub_3BCC90(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r12d
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rdx
  int v17; // r14d
  unsigned int v18; // esi
  int v19; // r13d
  __int64 v20; // rcx
  size_t v21; // r15
  unsigned int v22; // r14d
  __int64 v23; // r12
  __int64 i; // rax
  int v25; // eax
  __int64 v26; // rcx
  bool v27; // [rsp+1Bh] [rbp-84Dh]
  unsigned int v28; // [rsp+1Ch] [rbp-84Ch]
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
      if ( (unsigned int)v15 <= 0x400 )
      {
        v16 = 0;
        if ( v15 )
          v16 = sub_3BAB10(a1, s1, v15, a2, 0, 0);
        v17 = 2 * v5;
        if ( 2 * v5 < a3 )
        {
          v18 = v5;
          if ( v15 )
          {
            v27 = v15 == v16;
            v19 = 2 * v5;
            v28 = a2;
            v20 = v17 + a2 - v5;
            v21 = v15;
            v22 = v5;
            v23 = v16;
            for ( i = sub_3BAB10(a1, v30, v21, v20, 0, 0); ; i = sub_3BAB10(a1, v30, v21, v26, 0, 0) )
            {
              if ( v27 != (v21 == i) )
              {
LABEL_23:
                v18 = v22;
                goto LABEL_24;
              }
              if ( v21 == v23 )
              {
                if ( memcmp(s1, v30, v21) )
                  goto LABEL_23;
                v25 = v5 + v19;
                if ( v5 + v19 >= a3 )
                {
LABEL_33:
                  v17 = v19;
                  goto LABEL_29;
                }
                v26 = v28 + v19;
              }
              else
              {
                v25 = v5 + v19;
                if ( v5 + v19 >= a3 )
                  goto LABEL_33;
                v26 = v28 + v19;
              }
              v22 = v19;
              v19 = v25;
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

