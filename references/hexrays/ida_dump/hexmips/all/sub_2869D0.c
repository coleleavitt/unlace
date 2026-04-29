__int64 __fastcall sub_2869D0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r15d
  __int64 v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  __int64 v22; // r15
  __int64 *v23; // rax
  int tinfo_size; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+Ch] [rbp-3Ch]

  v3 = *(__int64 **)(a2 + 32);
  v4 = *(__int64 **)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = v3[6];
  if ( !(_BYTE)v6
    || !*(_BYTE *)(v5 + 48)
    || (v22 = *(_QWORD *)(a1 + 72), (get_tinfo_property(v6, 2) & 0x3F) == 1)
    || (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0x3F) == 1
    || (unsigned __int8)sub_2808E0((__int64)v3, 1, *(_DWORD *)(v22 + 644))
    || (unsigned __int8)sub_2808E0((__int64)v3, 66, 1)
    || (unsigned __int8)sub_2809B0((__int64)v3)
    || (unsigned __int8)sub_2808E0(v5, 1, *(_DWORD *)(v22 + 644))
    || (unsigned __int8)sub_2808E0(v5, 66, 1)
    || (v15 = sub_2809B0(v5), (_BYTE)v15)
    || (tinfo_size = get_tinfo_size(0, v3[6], 0),
        v25 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0),
        !sub_118880(tinfo_size))
    && !(unsigned __int8)compare_tinfo(v3[6], *(_QWORD *)(a2 + 48), 2)
    || !sub_118880(v25) && !(unsigned __int8)compare_tinfo(*(_QWORD *)(v5 + 48), *(_QWORD *)(a2 + 48), 2) )
  {
    sub_250520(a2);
    *(_DWORD *)(a2 + 8) = 66;
    v7 = sub_23CAB0();
    *(_QWORD *)(a2 + 24) = v7;
    v8 = sub_23CB40((__int64)v7, *v4);
    if ( sub_23D010(*(_QWORD *)(a1 + 72), (__int64)v4, v9, v10, v11) )
    {
      v4 = sub_23FBE0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v4, v12, v13, v14);
      v23 = v3;
      v3 = (__int64 *)v5;
      v5 = (__int64)v23;
    }
    v15 = 1;
    v16 = sub_2820B0((__int64)v8, (__int64)v4);
    v17 = sub_23CAB0();
    v18 = *(_QWORD *)(v16 + 64);
    *(_QWORD *)(v16 + 72) = v17;
    v19 = sub_23CB40(v18, *v3);
    v20 = sub_23CB40(*(_QWORD *)(v16 + 72), *(_QWORD *)v5);
    *((_DWORD *)v19 + 2) = 72;
    *((_DWORD *)v20 + 2) = 72;
    v19[3] = v3;
    v20[3] = v5;
    sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
  }
  return v15;
}
