__int64 __fastcall sub_1109610(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // r13
  const void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD v21[4]; // [rsp+0h] [rbp-E8h] BYREF
  __int16 v22; // [rsp+20h] [rbp-C8h]
  __int64 v23; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-B0h]
  __int16 v25; // [rsp+50h] [rbp-98h]
  __int64 v26; // [rsp+60h] [rbp-88h] BYREF
  __int64 v27; // [rsp+68h] [rbp-80h]
  __int16 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+90h] [rbp-58h] BYREF
  __int64 v30; // [rsp+98h] [rbp-50h]
  __int16 v31; // [rsp+B0h] [rbp-38h]

  v3 = a2 + 16;
  v4 = j__strlen(&byte_22CD811);
  v5 = (const void *)sub_2293970(a2 + 16);
  if ( v4 == v6 && (!v4 || !memcmp(v5, &byte_22CD811, v4)) )
  {
    v7 = sub_2292A00(*(unsigned int *)(a2 + 60));
    v31 = 261;
    v29 = v7;
    v30 = v8;
    v28 = 261;
    v26 = sub_22937A0(v3);
    v27 = v9;
    v10 = sub_2293740(v3);
    v25 = 261;
    v24 = v11;
    v23 = v10;
    sub_2298050(a1, &v23, &v26, &v29);
  }
  else
  {
    v13 = sub_2292F60(*(unsigned int *)(a2 + 64));
    v14 = *(unsigned int *)(a2 + 60);
    v31 = 261;
    v29 = v13;
    v30 = v15;
    v28 = 261;
    v26 = sub_2292A00(v14);
    v27 = v16;
    v25 = 261;
    v23 = sub_22937A0(v3);
    v24 = v17;
    v18 = sub_2293740(v3);
    v21[1] = v19;
    v22 = 261;
    v21[0] = v18;
    ((void (__fastcall *)(__int64, _QWORD *, __int64 *, __int64 *, __int64 *, __int64))sub_2298210)(
      a1,
      v21,
      &v23,
      &v26,
      &v29,
      v20);
  }
  return a1;
}

