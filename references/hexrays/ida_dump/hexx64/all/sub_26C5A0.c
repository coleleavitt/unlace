__int64 __fastcall sub_26C5A0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 tinfo_property; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *a2;
  v16[1] = __readfsqword(0x28u);
  v15 = 0;
  tinfo_property = get_tinfo_property(v4, 24);
  v7 = *a3;
  v15 = tinfo_property;
  v16[0] = get_tinfo_property(v7, 24);
  if ( (get_tinfo_property(v16[0], 2) & 0xF) != 0xA )
    goto LABEL_10;
  if ( (get_tinfo_property(v15, 2) & 0xF) == 0xA )
    goto LABEL_10;
  v8 = *(_DWORD *)(a1 + 24) - 1;
  if ( v8 < 0 )
    goto LABEL_10;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0;
  v11 = (__int64 *)(v9 + 8LL * (unsigned int)v8);
  while ( 1 )
  {
    v12 = v10;
    v10 = *v11;
    v13 = *(_DWORD *)(*v11 + 8);
    if ( (unsigned int)(v13 - 51) > 1 )
      break;
    --v8;
    --v11;
    if ( v8 == -1 )
      goto LABEL_10;
  }
  if ( v13 != 57 || *(_QWORD *)(v10 + 24) != v12 || !(unsigned __int8)compare_tinfo(*a2, *a3, 8) )
LABEL_10:
    v10 = 0;
  clear_tinfo_t(v16);
  clear_tinfo_t(&v15);
  return v10;
}
