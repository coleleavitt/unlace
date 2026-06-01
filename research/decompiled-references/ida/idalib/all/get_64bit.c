__int64 __fastcall get_64bit(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdx
  int v3; // eax
  char v5; // dl
  __int64 v6; // rax
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = *(__int64 **)(qword_2CCB598 + 1672);
  v2 = v1[2];
  v3 = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) == v3 )
  {
LABEL_2:
    if ( v3 > 8 )
      goto LABEL_3;
    return sub_3BEF70(v1, a1);
  }
  v5 = sub_510230(*(_QWORD *)(qword_2CCB598 + 1672), a1);
  v6 = v1[2];
  if ( v5 == 2 )
  {
    v3 = *(_DWORD *)(v6 + 16);
    goto LABEL_2;
  }
  v3 = *(_DWORD *)(v6 + 20);
  if ( v3 <= 8 )
    return sub_3BEF70(v1, a1);
LABEL_3:
  if ( v3 <= 16 )
    return sub_3BF2F0(v1, a1);
  sub_3BEFF0(v1, v7, a1);
  return v7[0];
}
