__int64 __fastcall sub_5F4B30(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  char v4; // al
  __int64 v6; // rdx
  __int64 idati; // rax
  unsigned int appended; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+0h] [rbp-58h]
  void *v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  int v19[2]; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+20h] [rbp-38h]
  int v21[2]; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]

  v3 = a2;
  v4 = *(_BYTE *)(a3 + 186);
  *(_QWORD *)v21 = __readfsqword(0x28u);
  if ( (v4 & 0xF) == 0xD && (v4 & 0x3F) != 0x2D )
  {
    if ( (*(_BYTE *)(a3 + 80) & 2) != 0 )
    {
      if ( !under_debugger )
        interr(641);
      BUG();
    }
    v6 = *(_QWORD *)(a3 + 72);
    v17 = nullptr;
    if ( !v6 )
      goto LABEL_15;
    idati = *(_QWORD *)(a1 + 248);
    *(_QWORD *)v19 = v6;
    LOWORD(v20) = 256;
    if ( !idati )
      idati = get_idati(a1, a2);
    v18 = idati;
    if ( !(unsigned __int8)create_tinfo(&v17, 61, 61, &v18) )
    {
LABEL_15:
      appended = 0;
      goto LABEL_10;
    }
    if ( (get_tinfo_property(v17, 2) & 0x3F) != 0x2D )
    {
      appended = append_tinfo_covered(a2, v17, 0);
LABEL_10:
      clear_tinfo_t(&v17);
      return appended;
    }
    clear_tinfo_t(&v17);
  }
  v10 = a3;
  appended = 0;
  v11 = sub_5F4860(a1, v10, 1);
  if ( v11 != -1 )
  {
    appended = 1;
    rangeset_t_add(v3, (int)&v18, v12, v13, v14, v15, v16, v17, 0, v11, v20, v21[0], v22);
  }
  return appended;
}
