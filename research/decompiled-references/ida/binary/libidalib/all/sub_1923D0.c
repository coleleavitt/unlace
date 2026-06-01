unsigned __int64 __fastcall sub_1923D0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 *v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  signed int v15; // r14d
  __int64 *v16; // r11
  __int64 *v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 *v27; // rsi
  __int64 *v28; // [rsp+10h] [rbp-C8h]
  int v29; // [rsp+20h] [rbp-B8h] BYREF
  int v30; // [rsp+24h] [rbp-B4h] BYREF
  __int64 v31; // [rsp+28h] [rbp-B0h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v33; // [rsp+38h] [rbp-A0h]
  __int128 v34; // [rsp+40h] [rbp-98h]
  __int64 (__fastcall **v35)(); // [rsp+50h] [rbp-88h] BYREF
  __int64 v36; // [rsp+58h] [rbp-80h]
  __int128 v37; // [rsp+60h] [rbp-78h]
  __int64 *v38; // [rsp+70h] [rbp-68h] BYREF
  __int128 v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+88h] [rbp-50h]
  unsigned __int64 v41; // [rsp+98h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v32 = &off_23D2A8;
  v33 = nullptr;
  v35 = &off_23D2A8;
  v36 = 0;
  v38 = nullptr;
  v40 = -1;
  v34 = 0;
  v37 = 0;
  v39 = 0;
  if ( (a3 & 1) == 0 )
  {
    v34 = 0u;
    v4 = 0;
    v5 = nullptr;
    goto LABEL_3;
  }
  sub_17B220(*(_QWORD *)(a1 + 2600), &v29, (unsigned int *)&v30);
  v15 = v29;
  v4 = v39;
  if ( v29 < 0 )
  {
    v21 = *(_QWORD *)(a1 + 2600);
    v22 = *(_DWORD *)(v21 + 96);
    if ( v22 >= 0 && v22 < *(_DWORD *)(v21 + 100) )
    {
      v26 = v22;
      v27 = v38;
      v31 = v22;
      if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
      {
        v38 = (__int64 *)qvector_reserve();
        v4 = v39;
        v27 = v38;
      }
      v27[v4] = v26;
      v4 = v39 + 1;
      *(_QWORD *)&v39 = v39 + 1;
    }
  }
  else if ( v29 <= v30 )
  {
    v16 = &v31;
    do
    {
      v17 = v38;
      v18 = v15;
      v19 = v4 + 1;
      v31 = v15;
      if ( v16 < v38 || v16 >= &v38[*((_QWORD *)&v39 + 1)] )
      {
        if ( *((_QWORD *)&v39 + 1) < v19 )
        {
LABEL_24:
          v28 = v16;
          v38 = (__int64 *)qvector_reserve();
          v4 = v39;
          v17 = v38;
          v16 = v28;
          v18 = v15;
        }
      }
      else if ( *((_QWORD *)&v39 + 1) < v19 )
      {
        goto LABEL_24;
      }
      v17[v4] = v18;
      ++v15;
      v4 = v39 + 1;
      *(_QWORD *)&v39 = v39 + 1;
    }
    while ( v30 >= v15 );
  }
  v5 = v38;
  if ( (a3 & 2) != 0 && v4 )
  {
    v23 = *v38;
    v40 = *v38;
  }
  else
  {
    v23 = v40;
  }
  v33 = v38;
  *(_QWORD *)&v34 = v4;
  *((_QWORD *)&v34 + 1) = *((_QWORD *)&v39 + 1);
  v38 = nullptr;
  v39 = 0;
  if ( v23 != -1 )
  {
    v24 = v37;
    v25 = v36;
    if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
    {
      v36 = qvector_reserve();
      v25 = v36;
      v24 = v37;
    }
    *(_QWORD *)(v25 + 8 * v24) = v23;
    *(_QWORD *)&v37 = v37 + 1;
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
  }
LABEL_3:
  v6 = a2[1];
  v7 = *a2;
  if ( a2[2] < (unsigned __int64)(v6 + 1) )
  {
    v20 = qvector_reserve();
    *a2 = v20;
    v6 = a2[1];
    v7 = v20;
  }
  v8 = v7 + 32 * v6;
  *(_QWORD *)v8 = 0;
  *(_BYTE *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++a2[1];
  if ( v4 )
    *(_QWORD *)v8 = sub_18FDD0((__int64)&v32);
  if ( (_QWORD)v37 )
  {
    v38 = nullptr;
    LOBYTE(v40) = 0;
    v39 = 0;
    v38 = (__int64 *)sub_18FDD0((__int64)&v35);
    *(_QWORD *)&v39 = -2;
    sub_17F530((__int64)a2, (__int64 *)&v38);
    sub_17F4E0((__int64 *)&v38);
  }
  *(_QWORD *)(v8 + 8) = -2;
  v9 = sub_183800((_QWORD *)(a1 + 160), 0xFFFFFFFFFFFFFFFELL);
  v10 = *(__int64 (__fastcall **)(__int64))(*v9 + 24);
  if ( v10 == sub_18E7E0 )
    v11 = v9[2];
  else
    v11 = v10((__int64)v9);
  v12 = v36;
  *(_QWORD *)(v8 + 16) = v11;
  v35 = &off_23D2A8;
  if ( v12 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( v5 )
    qfree();
  return v41 - __readfsqword(0x28u);
}

