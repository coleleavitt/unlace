__int64 __fastcall sub_36A6D0(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  _DWORD v10[4]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  __int16 v13; // [rsp+30h] [rbp-48h]
  char v14; // [rsp+32h] [rbp-46h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD **)(a2 + 1504);
  v15 = __readfsqword(0x28u);
  v9 = 0;
  v5 = a3 + 20;
  copy_tinfo_t(&v9, a3 + 20);
  if ( (get_tinfo_property(v9, 2) & 0xF) != 9 && !get_tinfo_property(v9, 281) )
  {
    if ( (unsigned __int8)sub_D0B70(*(_QWORD *)(a1 + 80), *(_DWORD *)(a1 + 72), a3[22])
      && (unsigned __int8)sub_1EBA00(a3, v3, a3[22], 3)
      && (unsigned __int8)sub_D0C40(a1, a2, (__int64)a3, v5) )
    {
      goto LABEL_13;
    }
    v8 = *(_DWORD *)(a1 + 72);
    if ( v8 <= 0x10 )
      v8 = getinf(99);
    if ( v8 != 176 && v8 != 256 )
    {
      sub_1C3D00(v10, a2, (__int64)a3, a3[22]);
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 48;
      if ( (unsigned __int8)sub_326380((__int64)&v11, 0, 48, (__int64)v10, 1u) )
      {
        sub_1EBC70((__int64)a3, *(_QWORD *)(a2 + 1504), &v12, 0);
        clear_tinfo_t(&v12);
        cleanup_argloc(v10);
LABEL_13:
        v6 = 1;
        goto LABEL_4;
      }
      clear_tinfo_t(&v12);
      cleanup_argloc(v10);
    }
    v6 = 0;
    goto LABEL_4;
  }
  v6 = sub_1EBA00(a3, v3, a3[22], 2);
LABEL_4:
  clear_tinfo_t(&v9);
  return v6;
}
