__int64 __fastcall sub_EE9450(_QWORD *a1, __int64 a2, double a3)
{
  int v4; // r15d
  int i; // ebp
  __int64 v6; // r13
  size_t v7; // rax
  int v8; // eax
  __int64 *v9; // rbp
  __int64 v10; // r15
  size_t v11; // rax
  __int64 v12; // r12
  size_t v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  size_t v16; // rax
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-48h]
  const __m128i *v20; // [rsp+8h] [rbp-40h]

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *a1;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
  }
  sub_971800(*a1, "try ");
  sub_EE8810(a1, *(_QWORD *)(a2 + 16), a3);
  v8 = *(_DWORD *)(a2 + 12);
  if ( v8 )
  {
    v9 = (__int64 *)(a2 + 24);
    v19 = a2 + 8LL * (unsigned int)(v8 - 1) + 32;
    v20 = (const __m128i *)(a1 + 3);
    do
    {
      v12 = *a1;
      v13 = j__strlen(" ");
      sub_9717A0(v12, " ", v13);
      v14 = *a1;
      v15 = *v9;
      v16 = j__strlen("catch (");
      sub_9717A0(v14, "catch (", v16);
      v17 = *(_QWORD *)(v15 + 16);
      if ( v17 )
        sub_B93BC0(v17, *a1, v20, *((_DWORD *)a1 + 2), 0);
      else
        sub_971800(*a1, "...");
      v10 = *a1;
      ++v9;
      v11 = j__strlen(") ");
      sub_9717A0(v10, ") ", v11);
      sub_EE8810(a1, *(_QWORD *)(v15 + 24), a3);
    }
    while ( (__int64 *)v19 != v9 );
  }
  return sub_22581D0(*a1, a1[5], a1[6]);
}

