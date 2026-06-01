__int64 __fastcall sub_43B140(_QWORD *a1, __int64 a2, int **a3, __int64 a4)
{
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  void *v14; // [rsp+18h] [rbp-30h]
  __int64 v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v14 = (void *)__readfsqword(0x28u);
  if ( (sub_4DC440(a1, a2) & 1) == 0 )
  {
    v7 = sub_3B9AA0((__int64)a1, a2, 4);
    if ( (~(_WORD)v7 & 0x600) == 0
      && (v7 & 0x10000000) != 0
      && !(unsigned __int8)sub_438000((__int64)a1, a2, *(_DWORD *)(a4 + 8)) )
    {
      sub_5B9040((int)a1, (__int64)ptr, v13, SDWORD2(v13), v14, v15, v16, v17);
      set_abits((unsigned int)a2, 0x20000000);
    }
    LODWORD(ptr) = *(_DWORD *)(a4 + 8) + 1;
    v8 = ea2node((unsigned int)a2);
    netnode_supset(v8, 1, &ptr, 4, 65);
    sub_3DC640(a1, *(_DWORD *)(a4 + 8), a2, 0x13u);
    v9 = *(_QWORD *)(a4 + 24);
    v13 = 0;
    v10 = *(unsigned int *)(a4 + 8);
    ptr = nullptr;
    sub_43ADF0((__int64)a1, (__int64)&ptr, v10, *(_DWORD *)(v9 + 16) == (_DWORD)a2, a3);
    v11 = haystack;
    if ( (_QWORD)v13 )
      v11 = (const char *)ptr;
    sub_437DE0(a1, a2, v11, 0, nullptr);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
  }
  return (__int64)v14 - __readfsqword(0x28u);
}

