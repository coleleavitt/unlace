__int64 __fastcall get_32bit(unsigned int a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rdx
  int v3; // eax
  char v5; // dl
  __int64 v6; // rax
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  v2 = v1[2];
  v3 = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) == v3 )
  {
LABEL_2:
    if ( v3 > 8 )
      goto LABEL_3;
    return sub_3BA060(v1, a1);
  }
  v5 = sub_4F8910(*(_QWORD *)(qword_2CA1698 + 1480), a1);
  v6 = v1[2];
  if ( v5 == 2 )
  {
    v3 = *(_DWORD *)(v6 + 16);
    goto LABEL_2;
  }
  v3 = *(_DWORD *)(v6 + 20);
  if ( v3 <= 8 )
    return sub_3BA060(v1, a1);
LABEL_3:
  if ( v3 <= 16 )
    return sub_3BA340(v1, a1);
  sub_3BA160(v1, v7, a1);
  return LODWORD(v7[0]);
}

