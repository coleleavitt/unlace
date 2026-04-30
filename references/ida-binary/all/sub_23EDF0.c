unsigned __int64 __fastcall sub_23EDF0(__int64 a1, double a2)
{
  int v2; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdx
  char *v14; // rcx
  __int64 v16; // rax
  _QWORD v17[9]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 16);
  v18 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = qword_8CC430;
    v5 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 != v5 )
    {
      while ( v2 != *(_DWORD *)v4 )
      {
        v4 += 256;
        if ( v5 == v4 )
          goto LABEL_10;
      }
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 200);
        v7 = *(_DWORD *)(v4 + 216);
        v8 = *(_QWORD *)(v4 + 192);
        if ( *(_QWORD *)(v4 + 208) < (unsigned __int64)(v6 + 1) )
        {
          v16 = qvector_reserve(v4 + 192, v8, v6 + 1, 4);
          *(_QWORD *)(v4 + 192) = v16;
          v8 = v16;
          v6 = *(_QWORD *)(v4 + 200);
        }
        *(_DWORD *)(v8 + 4 * v6) = v7;
        ++*(_QWORD *)(v4 + 200);
      }
    }
  }
LABEL_10:
  v17[1] = -1;
  v17[0] = 0xFFFFFFFFLL;
  v17[2] = 0;
  copy_debug_event(v17, &qword_8CC340);
  v9 = xmmword_8CC628;
  v10 = qword_8CC620;
  if ( *((_QWORD *)&xmmword_8CC628 + 1) < (unsigned __int64)(xmmword_8CC628 + 1) )
  {
    qword_8CC620 = qvector_reserve(&qword_8CC620, qword_8CC620, xmmword_8CC628 + 1, 72);
    v9 = xmmword_8CC628;
    v10 = qword_8CC620;
  }
  v11 = (_QWORD *)(v10 + 72 * v9);
  *v11 = 0xFFFFFFFFLL;
  v11[1] = -1;
  v11[2] = 0;
  copy_debug_event(v11, v17);
  *(_QWORD *)&xmmword_8CC628 = xmmword_8CC628 + 1;
  free_debug_event(v17);
  v12 = qword_8CC600;
  *((_QWORD *)qword_8CC600 + 7) = a1;
  if ( (int)sub_23D480((__int64)v12, 21, v13, v14, a2) < 0 )
    *(_QWORD *)(a1 + 8) = -1;
  return v18 - __readfsqword(0x28u);
}
