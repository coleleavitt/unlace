__int64 __fastcall sub_9A0E10(__int64 a1, __int64 a2, _DWORD *a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r14d
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned int v18; // r14d
  __int64 v19; // rdi
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r15
  int v24; // [rsp-8h] [rbp-88h]
  int v25; // [rsp+0h] [rbp-80h]
  int v26; // [rsp+8h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-78h]
  unsigned int v28; // [rsp+10h] [rbp-70h]
  unsigned int v29; // [rsp+14h] [rbp-6Ch]
  _DWORD *v30; // [rsp+18h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-58h] BYREF
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h]
  _DWORD *v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 16);
  v30 = a3;
  v32 = 0;
  v33 = v6;
  v8 = v7 + 7456;
  v34 = nullptr;
  v35 = v6;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++a3[2];
  sub_14B9BF0(v8, a2, &v32);
  if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
    goto LABEL_31;
  v9 = v32;
  if ( *(_WORD *)(v32 + 4) )
    goto LABEL_7;
  v29 = 0;
  v21 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL);
  if ( v21 && !*v21 && v21[1] == 8 )
  {
    v29 = *(_DWORD *)(v32 + 24);
    if ( v29 != 1 )
    {
LABEL_7:
      v29 = 0;
      goto LABEL_8;
    }
    v22 = *(_QWORD *)(v32 + 32);
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v27 = v22;
    sub_98B270(v9, v33);
    v32 = v27;
  }
LABEL_8:
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v26 = sub_B645B0(*(_QWORD *)(a1 + 16), v32);
  if ( v30 )
    ++v30[2];
  sub_98B270((__int64)v34, v35);
  v34 = v30;
  if ( a4 )
    sub_14B9BF0(v8, v30, &v34);
  if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
  {
LABEL_31:
    sub_98B270((__int64)v30, v6);
    sub_98B270(a2, v6);
    sub_98B270((__int64)v34, v35);
    return sub_98B270(v32, v33);
  }
  v10 = (__int64)v34;
  if ( !*((_WORD *)v34 + 2) )
  {
    v11 = 0;
    v12 = *(_DWORD **)(*((_QWORD *)v34 + 2) + 24LL);
    if ( !v12 || *v12 || v12[1] != 8 )
      goto LABEL_17;
    v11 = v34[6];
    if ( v11 == 1 )
    {
      v23 = *((_QWORD *)v34 + 4);
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      sub_98B270(v10, v35);
      v34 = (_DWORD *)v23;
      goto LABEL_17;
    }
  }
  v11 = 0;
LABEL_17:
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v13 = sub_B645B0(*(_QWORD *)(a1 + 16), v34);
  v14 = *(_QWORD *)(a1 + 24);
  v28 = v11 ^ v13;
  if ( *(_QWORD *)(v14 + 912) )
  {
    v15 = sub_15E1B70(v14);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v31 = 0;
    sub_966750(a1, v15, -1, 0, 0, -1, (__int64 ***)&v31, v24, v25, v26, v28, v30);
    if ( v31 )
      sub_186B220((void *)(v31 - 8));
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 8))-- == 1 )
        sub_15D7BC0(v14, v16);
    }
  }
  v18 = v26 ^ v29;
  sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v26 ^ v29, v28, 0, 0);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    std::operator<<<std::char_traits<char>>();
  if ( (unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
  {
    v19 = *(_QWORD *)(a1 + 16);
    if ( dword_1C7ECA0 == v18 )
    {
      sub_9936C0(v19, v28 >> 1);
    }
    else
    {
      sub_9936C0(v19, v18 >> 1);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 7488LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 7488LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * (v18 >> 1)),
        v18 & 1,
        v34);
    }
  }
  sub_98B270((__int64)v30, v6);
  sub_98B270(a2, v6);
  sub_98B270((__int64)v34, v35);
  return sub_98B270(v32, v33);
}

