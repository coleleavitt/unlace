unsigned __int64 __fastcall sub_C190(__int64 a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rdi
  size_t v4; // rbp
  void *v6; // rax
  void *v7; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)n = 0;
  v2 = (_BYTE *)sub_29E60(&ptr, 0, 10, 1);
  ptr = v2;
  n[0] = 10;
  *(_QWORD *)v2 = 0x736F686C61636F6CLL;
  v3 = ptr;
  v2[8] = 116;
  v3[9] = 0;
  v4 = n[0];
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v4 )
  {
    v6 = (void *)sub_29E10(v4);
    *(_QWORD *)(a1 + 8) = v6;
    v7 = ptr;
    *(_QWORD *)(a1 + 24) = v4;
    memcpy(v6, v7, v4);
    *(_QWORD *)(a1 + 16) = v4;
    v3 = ptr;
  }
  *(_WORD *)(a1 + 32) = -102;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_78C58;
  *(_QWORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v3 )
  {
    n[0] = 0;
    j__free(v3);
  }
  *(_QWORD *)a1 = &off_78CA0;
  return v10 - __readfsqword(0x28u);
}

