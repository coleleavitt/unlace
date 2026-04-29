unsigned __int64 __fastcall sub_2609A0(void (__fastcall ***a1)(_QWORD, _QWORD, void *, _BYTE *), __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 *v4; // rdi
  char *v5; // rcx
  char *v6; // rbx
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  void (__fastcall **v9)(_QWORD, _QWORD, void *, _BYTE *); // r8
  unsigned __int8 *v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  _BYTE v13[19]; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+33h] [rbp-25h] BYREF
  char v15; // [rsp+34h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v2 = *(int *)(a2 + 16);
  v16 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  tag_addr(&v11, v2, 0);
  v4 = v11;
  v5 = &v14;
  v6 = v13;
  v7 = v11;
  while ( 1 )
  {
    v8 = *v7++;
    *v6 = v8;
    if ( !(_BYTE)v8 )
      break;
    if ( ++v6 == &v14 )
    {
      v14 = 0;
      if ( !v4 )
        goto LABEL_7;
      goto LABEL_5;
    }
  }
  if ( !v4 )
    goto LABEL_6;
LABEL_5:
  *(_QWORD *)&v12 = 0;
  qfree(v4);
LABEL_6:
  if ( v6 >= &v15 )
    sub_25AA50(v4, v2, v8, v5);
LABEL_7:
  v9 = *a1;
  *v6 = 0;
  (*v9)(a1, 0, &unk_3F40D1, v13);
  return v16 - __readfsqword(0x28u);
}
