__int64 __fastcall sub_854CC0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  _BOOL8 v14; // rdx
  _DWORD *v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned int v20; // eax
  void *v21; // rbx
  void *v22; // [rsp+8h] [rbp-70h]
  unsigned int v23; // [rsp+1Ch] [rbp-5Ch]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  __int64 v27; // [rsp+38h] [rbp-40h]

  v5 = sub_852C00(a1, a2);
  v6 = *(_QWORD *)(a3 + 8);
  v7 = v5;
  v8 = *(_DWORD **)(v6 + 24);
  if ( !v8
    || *(v8 - 1) != 1
    || (v10 = *(_QWORD *)(v6 + 16), (*(_BYTE *)(v10 + 4) & 1) != 0)
    || *(_DWORD *)v10 != 1
    || (*(_BYTE *)(v10 + 20) & 1) != 0
    || *(_DWORD *)(v10 + 16) != 1
    || *v8 != v7 )
  {
    sub_854190((_QWORD *)a1, a3);
    if ( (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v7) == -1 )
    {
      v11 = *(_QWORD *)(a1 + 184);
      v12 = *(_QWORD *)(a1 + 496);
      if ( v11 && *(_DWORD *)(v11 - 4) )
      {
        sub_100FF90(*(_QWORD *)(a1 + 496));
      }
      else
      {
        v13 = sub_15D1F10(a2);
        v14 = 0;
        v15 = *(_DWORD **)(v13 + 24);
        if ( v15 && *v15 == 5 )
          v14 = v15[1] == 1;
        v24 = 0;
        v25 = 0;
        v16 = sub_1006C00(v12, v7, v14);
        v26 = 1;
        v27 = 0;
        sub_182CBA0(qword_1C7F2C0, &v26);
        v17 = *(_QWORD *)(a1 + 496);
        BYTE4(v26) &= ~1u;
        LODWORD(v26) = 1;
        v18 = sub_1016000(v17);
        sub_853D30(a1, v18);
        if ( v23 != -1 )
          sub_833030(a1, v16, v23);
        *(_BYTE *)(a1 + 152) = 1;
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v24);
        sub_182CBA0(v22, &v26);
        v24 = 0;
        v25 = 0;
        v26 = 1;
        v27 = 0;
        sub_182CBA0(qword_1C7F2C0, &v26);
        v19 = *(_QWORD *)(a1 + 496);
        BYTE4(v26) &= ~1u;
        LODWORD(v26) = 1;
        v20 = sub_1016000(v19);
        sub_853D30(a1, v20);
        if ( v23 != -1 )
          sub_833030(a1, v16, v23);
        *(_BYTE *)(a1 + 152) = 1;
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v24);
        sub_182CBA0(v21, &v26);
      }
    }
  }
  return v7;
}

