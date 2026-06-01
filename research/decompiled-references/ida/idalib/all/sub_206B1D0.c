__int64 __fastcall sub_206B1D0(__int64 a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h]
  _QWORD v18[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 1;
  v18[0] = 0;
  ptr = v18;
  v17 = 0x400000001LL;
  while ( 1 )
  {
    v9 = *(_BYTE *)(a1 - 16);
    if ( (v9 & 2) == 0 )
      break;
    if ( v4 >= *(_DWORD *)(a1 - 24) )
      goto LABEL_15;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 - 32) + 8LL * v4) )
    {
LABEL_12:
      v10 = (unsigned int)v17;
      v11 = (unsigned int)v17 + 1LL;
      if ( v11 > HIDWORD(v17) )
      {
        sub_2237220(&ptr, v18, v11, 8);
        v10 = (unsigned int)v17;
      }
      *((_QWORD *)ptr + v10) = 0;
      LODWORD(v17) = v17 + 1;
      goto LABEL_8;
    }
LABEL_4:
    v6 = a2(a3);
    if ( v6 )
    {
      v7 = (unsigned int)v17;
      v8 = (unsigned int)v17 + 1LL;
      if ( v8 > HIDWORD(v17) )
      {
        v15 = v6;
        sub_2237220(&ptr, v18, v8, 8);
        v7 = (unsigned int)v17;
        v6 = v15;
      }
      *((_QWORD *)ptr + v7) = v6;
      LODWORD(v17) = v17 + 1;
    }
LABEL_8:
    ++v4;
  }
  if ( v4 < ((*(_WORD *)(a1 - 16) >> 6) & 0xFu) )
  {
    if ( !*(_QWORD *)(a1 + -16 - 8LL * ((v9 >> 2) & 0xF) + 8LL * v4) )
      goto LABEL_12;
    goto LABEL_4;
  }
LABEL_15:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
    v12 = (_QWORD *)*v12;
  v13 = sub_20B52A0(v12, ptr, (unsigned int)v17, 1, 1);
  sub_20BCE60(v13, 0, v13);
  if ( ptr != v18 )
    free(ptr);
  return v13;
}
