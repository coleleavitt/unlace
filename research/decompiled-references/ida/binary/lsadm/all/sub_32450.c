unsigned __int64 __fastcall sub_32450(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v4; // rax
  __int64 v5; // r15
  char *v6; // rsi
  __int64 v7; // rax
  size_t v8; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  size_t v13; // rax
  char *v15; // rax
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  _BYTE v18[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v19[0] = __readfsqword(0x28u);
  v4 = sub_28E10(v18, (unsigned __int64)v19, v2) - v18;
  if ( v4 )
    sub_30190((char **)a2, v18, v4);
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a1 + 16) + 6 * v5;
      v16 = v11 + 6;
      if ( v11 < 0xFFFFFFFFFFFFFFFALL )
      {
        v6 = *(char **)a2;
        v7 = *(_QWORD *)(a2 + 8);
        v8 = 6;
        if ( *(_QWORD *)(a2 + 16) < v16 )
        {
          v15 = (char *)sub_29E60(a2, v6, v16, 1u);
          v16 = v11 + 6;
          *(_QWORD *)a2 = v15;
          v6 = v15;
          v7 = *(_QWORD *)(a2 + 8);
          v8 = v11 + 6 - v7;
        }
        v17 = v16;
        memset(&v6[v7], 0, v8);
        v9 = v17;
      }
      else
      {
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      }
      *(_QWORD *)(a2 + 8) = v9;
      ++v5;
      v10 = *(_QWORD *)a2 + v11;
      *(_DWORD *)v10 = *(_DWORD *)v12;
      *(_WORD *)(v10 + 4) = *(_WORD *)(v12 + 4);
    }
    while ( v2 != v5 );
  }
  v13 = sub_28E10(v18, (unsigned __int64)v19, *(_DWORD *)(a1 + 40)) - v18;
  if ( v13 )
    sub_30190((char **)a2, v18, v13);
  return v19[0] - __readfsqword(0x28u);
}

