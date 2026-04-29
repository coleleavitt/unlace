unsigned __int64 __fastcall sub_2A5380(__int64 *a1, __int64 a2, __int64 a3)
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
  __int64 v34; // rax
  __int64 tinfo_property; // rax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  char v45; // [rsp+10h] [rbp-B8h]
  __int64 v46; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v48[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v50; // [rsp+50h] [rbp-78h] BYREF
  __int64 v51; // [rsp+58h] [rbp-70h] BYREF
  _DWORD v52[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v53[4]; // [rsp+70h] [rbp-58h] BYREF
  int v54; // [rsp+80h] [rbp-48h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v48[0] = 2;
  v5 = (_QWORD *)operator new(0x10u);
  *v5 = 0;
  v5[1] = 0;
  v48[1] = v5;
  if ( a2 )
  {
    v10 = *a1;
    v51 = a2;
    v50 = 6;
    sub_29C3E0((__int64)&v50, v10, v6, v7, v8, v9);
    v52[0] = 0;
    sub_29BAF0((__int64)v52, (unsigned int *)v48);
    v53[0] = 0;
    sub_29BAF0((__int64)v53, (unsigned int *)&v50);
    v54 = 2;
    sub_2A4690((__int64)a1, (__int64)v52, 0, v11, v12, v13);
    v54 = -1;
    sub_29AFB0((__int64)v53);
    sub_29AFB0((__int64)v52);
    sub_29AFB0((__int64)&v50);
    if ( *(_DWORD *)(a2 + 8) == 48 )
    {
      v34 = *(_QWORD *)(a2 + 24);
      if ( (*(_DWORD *)(v34 + 8) == 52 || (get_tinfo_property(*(_QWORD *)(v34 + 48), 2) & 0xF) == 0xB)
        && (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xA )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 10);
        v46 = tinfo_property;
        if ( !(_BYTE)tinfo_property
          || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
          || (v47 = get_tinfo_property(tinfo_property, 9),
              v45 = get_tinfo_property(v47, 2),
              clear_tinfo_t(&v47),
              (v45 & 0x3F) == 0x30) )
        {
          clear_tinfo_t(&v46);
        }
        else
        {
          v50 = 1;
          v51 = 0;
          copy_tinfo_t(&v51, &v46);
          v40 = *(_QWORD *)(a2 + 24);
          if ( *(_DWORD *)(v40 + 8) == 52 )
            v40 = *(_QWORD *)(v40 + 24);
          v49[1] = v40;
          v41 = *a1;
          v49[0] = 6;
          sub_29C3E0((__int64)v49, v41, v36, v37, v38, v39);
          v52[0] = 0;
          sub_29BAF0((__int64)v52, (unsigned int *)v49);
          v53[0] = 0;
          sub_29BAF0((__int64)v53, (unsigned int *)&v50);
          v54 = 2;
          sub_2A4690((__int64)a1, (__int64)v52, 0, v42, v43, v44);
          v54 = -1;
          sub_29AFB0((__int64)v53);
          sub_29AFB0((__int64)v52);
          sub_29AFB0((__int64)v49);
          sub_29AFB0((__int64)&v50);
          clear_tinfo_t(&v46);
        }
      }
    }
  }
  if ( a3 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 == 2 || (unsigned int)(v14 - 22) <= 9 )
    {
      v15 = sub_251360(*(_QWORD *)(a3 + 24));
      if ( a2 != v15 )
      {
        v20 = *a1;
        v51 = v15;
        v50 = 6;
        sub_29C3E0((__int64)&v50, v20, v16, v17, v18, v19);
        v52[0] = 0;
        sub_29BAF0((__int64)v52, (unsigned int *)v48);
        v53[0] = 0;
        sub_29BAF0((__int64)v53, (unsigned int *)&v50);
        v54 = 2;
        sub_2A4690((__int64)a1, (__int64)v52, 0, v21, v22, v23);
        v54 = -1;
        sub_29AFB0((__int64)v53);
        sub_29AFB0((__int64)v52);
        sub_29AFB0((__int64)&v50);
      }
      v24 = sub_251360(*(_QWORD *)(a3 + 32));
      if ( *(_QWORD *)(a3 + 32) != a2 )
      {
        v29 = *a1;
        v51 = v24;
        v50 = 6;
        sub_29C3E0((__int64)&v50, v29, v25, v26, v27, v28);
        v52[0] = 0;
        sub_29BAF0((__int64)v52, (unsigned int *)v48);
        v53[0] = 0;
        sub_29BAF0((__int64)v53, (unsigned int *)&v50);
        v54 = 2;
        sub_2A4690((__int64)a1, (__int64)v52, 0, v30, v31, v32);
        v54 = -1;
        sub_29AFB0((__int64)v53);
        sub_29AFB0((__int64)v52);
        sub_29AFB0((__int64)&v50);
      }
    }
  }
  sub_29AFB0((__int64)v48);
  return v55 - __readfsqword(0x28u);
}
