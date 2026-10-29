__int64 __fastcall sub_F995C0(__int64 a1, __int64 *a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 i; // rsi
  const char *v9; // rdi
  size_t v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v15; // [rsp+20h] [rbp-88h]
  _QWORD v16[4]; // [rsp+30h] [rbp-78h] BYREF
  __int16 v17; // [rsp+50h] [rbp-58h]
  _QWORD v18[4]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v19; // [rsp+80h] [rbp-28h]

  v4 = *((_DWORD *)a2 + 42);
  if ( a3 < v4 + 1499 )
  {
    v5 = *a2;
    if ( a3 > 0x5DA )
    {
      v5 = a2[7];
      a3 -= 1499;
    }
  }
  else
  {
    v5 = a2[14];
    a3 = a3 - 1499 - v4;
  }
  v6 = *(_QWORD *)(v5 + 16);
  v7 = a3;
  for ( i = v5 + 40; a3 >= v6; v7 = a3 )
  {
    v5 = i;
    i += 40;
    a3 -= v6;
    v6 = *(_QWORD *)(i - 24);
  }
  v9 = (const char *)(**(_QWORD **)v5 + *(unsigned int *)(*(_QWORD *)(v5 + 8) + 20 * v7));
  if ( v9 )
    v10 = strlen(v9);
  else
    v10 = 0;
  v11 = *(_QWORD *)(v5 + 24);
  v12 = *(_QWORD *)(v5 + 32);
  v16[3] = v10;
  v14[2] = v11;
  v14[3] = v12;
  v15 = 1539;
  v17 = 1282;
  v19 = 770;
  v16[2] = v9;
  v18[0] = v16;
  v14[0] = "'";
  v16[0] = v14;
  v18[2] = "'";
  sub_222F820(a1, v18);
  return a1;
}

