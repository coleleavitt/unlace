unsigned __int64 __fastcall sub_2A9000(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rsi
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  char tinfo_property; // al
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rsi
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  char v44; // [rsp+10h] [rbp-B8h]
  _QWORD v45[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+50h] [rbp-78h] BYREF
  __int64 v48; // [rsp+58h] [rbp-70h]
  _DWORD v49[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v50[4]; // [rsp+70h] [rbp-58h] BYREF
  int v51; // [rsp+80h] [rbp-48h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v45[0] = 2;
  v5 = (_QWORD *)operator new(0x10u);
  *v5 = 0;
  v5[1] = 0;
  v45[1] = v5;
  if ( a2 )
  {
    v10 = *a1;
    v48 = a2;
    v47 = 6;
    sub_2A0060((__int64)&v47, v10, v6, v7, v8, v9);
    v49[0] = 0;
    sub_29F770((__int64)v49, (unsigned int *)v45);
    v50[0] = 0;
    sub_29F770((__int64)v50, (unsigned int *)&v47);
    v51 = 2;
    sub_2A8310((__int64)a1, (__int64)v49, 0, v11, v12, v13);
    v51 = -1;
    sub_29EC30((__int64)v50);
    sub_29EC30((__int64)v49);
    sub_29EC30((__int64)&v47);
    if ( *(_DWORD *)(a2 + 8) == 48
      && (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 52 || (get_tinfo_property() & 0xF) == 0xB)
      && (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = get_tinfo_property();
      if ( tinfo_property && ((tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0) )
      {
        get_tinfo_property();
        v44 = get_tinfo_property();
        clear_tinfo_t();
        if ( (v44 & 0x3F) != 0x30 )
        {
          v47 = 1;
          v48 = 0;
          copy_tinfo_t();
          v39 = *(_QWORD *)(a2 + 24);
          if ( *(_DWORD *)(v39 + 8) == 52 )
            v39 = *(_QWORD *)(v39 + 24);
          v46[1] = v39;
          v40 = *a1;
          v46[0] = 6;
          sub_2A0060((__int64)v46, v40, v35, v36, v37, v38);
          v49[0] = 0;
          sub_29F770((__int64)v49, (unsigned int *)v46);
          v50[0] = 0;
          sub_29F770((__int64)v50, (unsigned int *)&v47);
          v51 = 2;
          sub_2A8310((__int64)a1, (__int64)v49, 0, v41, v42, v43);
          v51 = -1;
          sub_29EC30((__int64)v50);
          sub_29EC30((__int64)v49);
          sub_29EC30((__int64)v46);
          sub_29EC30((__int64)&v47);
        }
      }
      clear_tinfo_t();
    }
  }
  if ( a3 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 == 2 || (unsigned int)(v14 - 22) <= 9 )
    {
      v15 = sub_254FE0(*(_QWORD *)(a3 + 24));
      if ( a2 != v15 )
      {
        v20 = *a1;
        v48 = v15;
        v47 = 6;
        sub_2A0060((__int64)&v47, v20, v16, v17, v18, v19);
        v49[0] = 0;
        sub_29F770((__int64)v49, (unsigned int *)v45);
        v50[0] = 0;
        sub_29F770((__int64)v50, (unsigned int *)&v47);
        v51 = 2;
        sub_2A8310((__int64)a1, (__int64)v49, 0, v21, v22, v23);
        v51 = -1;
        sub_29EC30((__int64)v50);
        sub_29EC30((__int64)v49);
        sub_29EC30((__int64)&v47);
      }
      v24 = sub_254FE0(*(_QWORD *)(a3 + 32));
      if ( *(_QWORD *)(a3 + 32) != a2 )
      {
        v29 = *a1;
        v48 = v24;
        v47 = 6;
        sub_2A0060((__int64)&v47, v29, v25, v26, v27, v28);
        v49[0] = 0;
        sub_29F770((__int64)v49, (unsigned int *)v45);
        v50[0] = 0;
        sub_29F770((__int64)v50, (unsigned int *)&v47);
        v51 = 2;
        sub_2A8310((__int64)a1, (__int64)v49, 0, v30, v31, v32);
        v51 = -1;
        sub_29EC30((__int64)v50);
        sub_29EC30((__int64)v49);
        sub_29EC30((__int64)&v47);
      }
    }
  }
  sub_29EC30((__int64)v45);
  return v52 - __readfsqword(0x28u);
}
