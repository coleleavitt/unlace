__int64 __fastcall sub_3BA690(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  int v3; // eax
  char v5; // dl
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int8 v10; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]
  int v13; // [rsp+1Ch] [rbp-2Ch]
  char v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v2 = a1[2];
  v15 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) == v3 )
  {
LABEL_2:
    if ( v3 <= 16 )
      goto LABEL_3;
    goto LABEL_8;
  }
  v5 = sub_4F8910(a1, a2);
  v6 = a1[2];
  if ( v5 == 2 )
  {
    v3 = *(_DWORD *)(v6 + 16);
    goto LABEL_2;
  }
  v3 = *(_DWORD *)(v6 + 20);
  if ( v3 <= 16 )
  {
LABEL_3:
    if ( v3 <= 8 )
      return (unsigned __int16)sub_3B9FA0(a1, a2);
    sub_3BA160(a1, &v11, a2);
    return (unsigned int)v11;
  }
LABEL_8:
  v12 = a2;
  v11 = 0;
  v13 = 0;
  v14 = getinf_flag(3, 64);
  sub_3BA550(a1, &v9, (__int64)&v11);
  sub_3BA550(a1, &v10, (__int64)&v11);
  v7 = v10;
  v8 = v9;
  if ( v14 )
    v8 = v9 << 8;
  else
    v7 = v10 << 8;
  return (unsigned int)(v8 + v7);
}

