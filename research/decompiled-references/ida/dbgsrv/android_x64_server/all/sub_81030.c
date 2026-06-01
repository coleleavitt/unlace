/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81030
// Address: 0x0000000000081030

//----- (0000000000081030) ----------------------------------------------------
unsigned __int64 __fastcall sub_81030(__int64 a1, char **a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v5; // r14
  __int64 v6; // rax
  char **v7; // rax
  unsigned __int64 i; // r12
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // rbp
  char *v12; // r15
  size_t v13; // r14
  char **v16; // [rsp+10h] [rbp-68h]
  unsigned __int64 v17; // [rsp+18h] [rbp-60h]
  __int128 dest; // [rsp+20h] [rbp-58h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+40h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v5 = (_QWORD *)(a1 + 88);
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = sub_814A0;
  *(_QWORD *)(a1 + 208) = a1;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_OWORD *)(a1 + 305) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 340) = 1;
  *(_QWORD *)(a1 + 432) = 0;
  *(_BYTE *)(a1 + 440) = 0;
  *(_BYTE *)(a1 + 444) = 0;
  *(_DWORD *)(a1 + 448) = 0;
  *(_BYTE *)(a1 + 452) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 496) = 1065353216;
  *(_BYTE *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 508) = 5;
  v6 = 132;
  if ( a2 )
    v6 = a3;
  v17 = v6;
  if ( v6 )
  {
    v7 = off_14DF50;
    if ( a2 )
      v7 = a2;
    v16 = v7;
    for ( i = 0; i < v17; ++i )
    {
      v9 = v16[i];
      dest = 0;
      ptr = nullptr;
      v10 = strlen(v9);
      if ( v10 >= 0xFFFFFFFFFFFFFFF0LL )
        sub_8BF30();
      v11 = v10;
      if ( v10 >= 0x17 )
      {
        v13 = (v10 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        v12 = (char *)operator new(v13);
        ptr = v12;
        *(_QWORD *)&dest = v13 | 1;
        *((_QWORD *)&dest + 1) = v11;
        v5 = (_QWORD *)(a1 + 88);
      }
      else
      {
        LOBYTE(dest) = 2 * v10;
        v12 = (char *)&dest + 1;
        if ( !v10 )
          goto LABEL_13;
      }
      memcpy(v12, v9, v11);
LABEL_13:
      v12[v11] = 0;
      *(_WORD *)sub_81590(v5, (unsigned __int8 *)&dest) = i + 128;
      if ( (dest & 1) != 0 )
        operator delete(ptr);
    }
  }
  sub_81940(a1, 0, a5);
  return __readfsqword(0x28u);
}
// 14DF50: using guessed type char *off_14DF50[132];
