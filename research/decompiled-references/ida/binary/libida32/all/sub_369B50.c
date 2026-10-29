__int64 __fastcall sub_369B50(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  char v14; // [rsp+14h] [rbp-74h]
  char v15; // [rsp+15h] [rbp-73h]
  char v16; // [rsp+17h] [rbp-71h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  __int128 v18; // [rsp+20h] [rbp-68h]
  unsigned __int64 v19; // [rsp+60h] [rbp-28h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v19 = 0xFFFFFFFF00000000LL;
  v7 = a1[2];
  v18 = -1;
  LODWORD(v13) = v7;
  v8 = a1[10];
  v9 = (unsigned int)a1[18];
  HIDWORD(v13) = v8;
  v10 = setup_selector(v9, a2, a3, a4, a5, a6, v13, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0xFFFFFFFF00000000LL, v20);
  v11 = (unsigned int)a1[50];
  HIDWORD(v17) = v10;
  v16 = a1[26];
  v14 = a1[34];
  v15 = a1[42];
  *(_DWORD *)(a2 + 8) = (unsigned __int8)add_segm_ex(&v13, 0, 0, v11);
  return 0;
}

