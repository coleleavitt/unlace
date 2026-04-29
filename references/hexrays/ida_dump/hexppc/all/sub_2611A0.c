unsigned __int64 __fastcall sub_2611A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rsi
  _BYTE *v7; // rdi
  __int64 v8; // rbx
  char *v9; // rax
  char v10; // dl
  _BYTE *v11; // r15
  int v12; // ebx
  _BYTE *v14; // [rsp+0h] [rbp-468h] BYREF
  __int128 v15; // [rsp+8h] [rbp-460h]
  _BYTE v16[1023]; // [rsp+20h] [rbp-448h] BYREF
  char v17; // [rsp+41Fh] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-40h]

  v5 = *(int *)(a1 + 16);
  v19 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  tag_addr(&v14, v5, 0);
  v7 = v14;
  v8 = (__int64)v16;
  v9 = v14;
  do
  {
    v10 = *v9++;
    *(_BYTE *)v8 = v10;
    if ( !v10 )
    {
      v11 = &v18[-v8];
      goto LABEL_6;
    }
    ++v8;
  }
  while ( (char *)v8 != &v17 );
  v17 = 0;
  v11 = &byte_1;
LABEL_6:
  if ( v7 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v7);
  }
  v12 = sub_261100(a3[5], v8, (__int64)v11, *(_DWORD *)(a1 + 12));
  (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _BYTE *))*a3)(a3, 0, &unk_406157, v16);
  sub_25EAC0((void **)a1, a2, v12, 0, byte_406148, a3, 0x49u);
  return v19 - __readfsqword(0x28u);
}
