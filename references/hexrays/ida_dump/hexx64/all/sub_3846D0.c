__int64 __fastcall sub_3846D0(_QWORD *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rax
  const __m128i *v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  _DWORD v12[4]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v5 = a1[27];
  v6 = (const __m128i *)a1[28];
  v14 = __readfsqword(0x28u);
  v7 = sub_20BCC0(*(_QWORD *)(v5 + 8), a2, v6, a3, a4, a5);
  if ( (_BYTE)v7 )
  {
    v9 = a1[28];
    v12[0] = 0;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL);
    copy_argloc(v12, a2);
    v11 = a1[23];
    v13 = v10;
    v7 = !sub_216A70(v11, (__int64)v12);
    cleanup_argloc(v12);
  }
  return v7;
}
