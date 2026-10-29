__int64 __fastcall get_switch_info(unsigned int *a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // eax
  int v10; // [rsp+Ch] [rbp-43Ch] BYREF
  _BYTE v11[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+418h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = qword_2CA1698;
  v10 = ea2node(a2);
  result = sub_79B5C0(&v10, v2, 8, v11, 1024, 83);
  if ( result <= 0 )
    return -1;
  if ( a1 )
  {
    sub_5834E0(a1, v11, result);
    if ( (*a1 & 1) == 0 )
      *a1 &= ~0x10000u;
    v8 = *(_DWORD *)(v2 + 764);
    if ( v8 == 13 )
    {
      v9 = *a1;
      if ( (*a1 & 0x4000) == 0 )
        return 80;
      v4 = ~v9 & 0x80002;
      if ( (~v9 & 0x80002) != 0 )
      {
LABEL_12:
        BYTE1(v9) &= ~0x40u;
        *a1 = v9 | 0x400000;
        if ( *(_DWORD *)(v2 + 764) == 13 )
          sub_57F3C0(a1, a2, v4, v5, v6, v7);
        return 80;
      }
      *a1 = v9 & 0xFFF7BFFD;
      v8 = *(_DWORD *)(v2 + 764);
    }
    if ( (v8 & 0xFFFFFFFD) != 0xD )
      return 80;
    v9 = *a1;
    if ( (*a1 & 0x4000) == 0 )
      return 80;
    goto LABEL_12;
  }
  return result;
}

