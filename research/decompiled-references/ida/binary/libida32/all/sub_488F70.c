unsigned __int64 __fastcall sub_488F70(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-3A0h]
  __int64 v28; // [rsp+8h] [rbp-3A0h]
  __int64 v29; // [rsp+10h] [rbp-398h]
  __int64 v30; // [rsp+10h] [rbp-398h]
  __int64 v31; // [rsp+18h] [rbp-390h]
  _QWORD v32[52]; // [rsp+20h] [rbp-388h] BYREF
  _BYTE v33[424]; // [rsp+1C0h] [rbp-1E8h] BYREF
  unsigned __int64 v34; // [rsp+368h] [rbp-40h]

  v2 = a1[1];
  v34 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v32, 0, sizeof(v32));
    LODWORD(v32[33]) = -1;
    v32[37] = &v32[43];
    v32[38] = 1;
    v32[41] = 1065353216;
    if ( a2 < v2 )
    {
      v7 = a2;
      v8 = 416 * a2;
      do
      {
        ++v7;
        v9 = v8 + *a1;
        v8 += 416;
        sub_481890(v9);
      }
      while ( v2 != v7 );
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)v32 >= *a1 && (unsigned __int64)v32 < 416 * v4 + *a1 )
      {
        sub_488720((__int64)v33, (__int64)v32);
        v10 = a1[2];
        if ( v10 < a2 )
        {
          v30 = qvector_reserve(a1, 0, a2, 416);
          v21 = v30;
          v22 = a1[2];
          a1[2] = v10;
          v23 = (__int64 *)*a1;
          v31 = v22;
          v24 = a1[1] - 1;
          if ( v24 >= 0 )
          {
            do
            {
              v25 = v21;
              v28 = v24;
              v21 += 416;
              sub_486910(v25, v23);
              v26 = (__int64)v23;
              v23 += 52;
              sub_481890(v26);
              v24 = v28 - 1;
            }
            while ( v28 );
            v23 = (__int64 *)*a1;
          }
          qfree(v23);
          *a1 = v30;
          a1[2] = v31;
        }
        v11 = a1[1];
        if ( v11 < a2 )
        {
          v12 = 416 * v11;
          do
          {
            sub_488720(v12 + *a1, (__int64)v33);
            ++v11;
            v12 += 416;
          }
          while ( a2 != v11 );
        }
        a1[1] = a2;
        sub_481890((__int64)v33);
        goto LABEL_9;
      }
      if ( v4 < a2 )
      {
        v13 = qvector_reserve(a1, 0, a2, 416);
        v14 = a1[2];
        v15 = (__int64 *)*a1;
        a1[2] = v4;
        v27 = v13;
        v29 = v14;
        v16 = a1[1] - 1;
        if ( v16 >= 0 )
        {
          v17 = v13;
          do
          {
            v18 = v17;
            v17 += 416;
            sub_486910(v18, v15);
            v19 = (__int64)v15;
            v15 += 52;
            sub_481890(v19);
          }
          while ( v16-- != 0 );
          v15 = (__int64 *)*a1;
        }
        qfree(v15);
        v2 = a1[1];
        *a1 = v27;
        a1[2] = v29;
      }
      if ( v2 < a2 )
      {
        v5 = 416 * v2;
        do
        {
          sub_488720(v5 + *a1, (__int64)v32);
          ++v2;
          v5 += 416;
        }
        while ( v2 < a2 );
      }
    }
    a1[1] = a2;
LABEL_9:
    sub_481890((__int64)v32);
  }
  return v34 - __readfsqword(0x28u);
}

