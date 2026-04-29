unsigned __int64 __fastcall sub_2288D0(int *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  bool v5; // zf
  __int64 v6; // rdi
  int v7; // r12d
  __int64 *v8; // r13
  __int64 v9; // r15
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 tinfo_size; // rax
  int v21; // ecx
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-60h]
  int v31; // [rsp+1Ch] [rbp-4Ch]
  __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v5 = *a1 == -1;
  v6 = *a4;
  v7 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  v33 = __readfsqword(0x28u);
  v8 = a4;
  v31 = v7;
  if ( v5 && !(_BYTE)v6 )
  {
    v27 = *(_DWORD *)(a3 + 72);
    if ( v27 <= 0x10 )
      v27 = getinf(99);
    if ( v27 == 176 || v27 == 256 || (unsigned __int8)getinf_flag(67, 2) )
      return v33 - __readfsqword(0x28u);
    *a1 = v7;
    v6 = *v8;
    v7 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  }
  v9 = *a2;
  if ( (get_tinfo_property(v6, 2) & 0xF) == 0xB )
  {
    v8 = nullptr;
    v10 = *a1;
  }
  else
  {
    tinfo_size = get_tinfo_size(0, *v8, 0);
    v10 = *a1;
    if ( tinfo_size != *a1 )
      v8 = nullptr;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 1496) + 145LL) && v7 > v10 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 936) + 40LL))(*(_QWORD *)(a3 + 936));
    v19 = *a1;
    if ( v18 == (v9 & -v7) )
    {
      if ( *a2 + v19 > v18 + v7 )
      {
        if ( !under_debugger )
          sub_3835A0(52384);
        goto LABEL_61;
      }
      *a2 = v18;
      *a1 = v7;
      return v33 - __readfsqword(0x28u);
    }
    v28 = sub_2285D0(a3, v9, v8, v19);
    if ( v28 > 0 && v28 <= v7 )
    {
      *a1 = v28;
      return v33 - __readfsqword(0x28u);
    }
    v10 = *a1;
  }
  v11 = *a2;
  do
  {
    v17 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
    if ( v10 % v17 )
      v17 = v10;
    if ( v8 )
    {
      v29 = v11;
      v32 = 0;
      copy_tinfo_t(&v32, v8);
      v11 = v29;
    }
    else
    {
      v32 = 0;
    }
    v12 = sub_2280F0(a3, v11, &v32, v17);
    clear_tinfo_t(&v32);
    if ( v10 != -1 )
    {
      v13 = *a2;
      if ( v12 == *a2 )
        goto LABEL_46;
      if ( v10 && v13 >= v12 && v10 + v12 - 1 >= v13 + *a1 - 1 )
      {
        if ( sub_11C4C0(v10) )
          goto LABEL_46;
        v13 = *a2;
      }
      if ( v12 >= (__int64)v13 )
        v14 = v10 + v12 - v13;
      else
        v14 = v10 - v12 + v13;
      v15 = *(_QWORD *)(a3 + 1504);
      v16 = 16;
      if ( (*(_BYTE *)(v15 + 50) & 8) == 0 )
        v16 = 2 * *(_DWORD *)(v15 + 80);
      if ( v14 > v16 )
      {
        v21 = 1;
        v22 = v13 & -v31;
        if ( *a1 > 0 )
          v21 = *a1;
        v23 = sub_2285D0(a3, v22, nullptr, (int)v13 + v21 - (int)v22);
        *a1 = v23;
        v24 = *a2;
        if ( v23 && v24 >= v22 && v23 + v22 - 1 >= v24 )
        {
          *a2 = v22;
          return v33 - __readfsqword(0x28u);
        }
        if ( !under_debugger )
          sub_3835A0(52374);
LABEL_61:
        BUG();
      }
      v8 = nullptr;
      v10 = sub_11C4D0(v14);
    }
    v11 = *a2;
  }
  while ( *a2 < v12 );
  if ( v10 != -1 )
  {
LABEL_46:
    v26 = sub_2285D0(a3, v12, v8, v10);
    if ( v10 < v26 )
      v10 = v26;
  }
  *a1 = v10;
  *a2 = v12;
  return v33 - __readfsqword(0x28u);
}
