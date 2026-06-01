__int64 __fastcall sub_DC0100(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+18h] [rbp-30h]
  __int64 v11; // [rsp+20h] [rbp-28h]
  unsigned int v12; // [rsp+28h] [rbp-20h]

  sub_E20A90(v9, a1, a2);
  if ( v10 )
  {
    v6 = v9[0];
    v4 = v11;
LABEL_9:
    v7 = (_QWORD *)(v4 + v6 + 40);
    goto LABEL_10;
  }
  v4 = v11;
  v5 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v5 + 24) != v12 && v12 )
    v5 = *(_QWORD *)(v11 + v12 + 32);
  v6 = v9[0];
  if ( !*(_BYTE *)(v5 + 60) || v9[0] != v12 )
    goto LABEL_9;
  v7 = (_QWORD *)(v11 + v9[0] + 72);
LABEL_10:
  *v7 = *a3;
  return sub_E232A0(v9);
}
