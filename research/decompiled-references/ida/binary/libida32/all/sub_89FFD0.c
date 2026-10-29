__int64 __fastcall sub_89FFD0(__int64 a1, size_t *a2, int a3, void *a4)
{
  size_t v4; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbp
  unsigned int v9; // ebx
  size_t v10; // r15
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-58h] BYREF
  char v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+Ch] [rbp-4Ch]
  int v15; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v4 = *a2;
  v16 = __readfsqword(0x28u);
  v14 = a3;
  v13 = 95;
  v15 = v4;
  v12 = off_2B15118;
  if ( (unsigned int)sub_89F790(a1, (char *)&v12)
    || *(_DWORD *)(a1 + 248) == 1 && (sub_89F790(a1, (char *)&v12), (unsigned int)sub_89F790(a1, (char *)&v12)) )
  {
    v8 = 0;
  }
  else
  {
    v8 = sub_89F510(a1, v13, 0);
  }
  v9 = sub_89A5C0((_QWORD *)a1, v8, 96, (_BYTE *)(a1 + 288), v6, v7);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( *a2 < v10 )
      sub_365330();
    memcpy(a4, *(const void **)(v8 + 16), v10);
    *a2 = v10;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  nullsub_304(&v12);
  return v9;
}

