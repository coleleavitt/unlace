__int64 __fastcall sub_20D6BE0(_QWORD *a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r12
  __int64 *v8; // r13
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  _BYTE *v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v2 = j__strlen("requires");
  sub_20D1ED0((_QWORD *)a2, v2, "requires");
  if ( a1[3] )
  {
    sub_20CFD70(a2);
    v16 = *(_QWORD *)(a2 + 16);
    v17 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v16 + 1;
    *(_BYTE *)(v17 + v16) = 32;
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v18 = *(_QWORD *)(a2 + 16);
    v19 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v18 + 1;
    *(_BYTE *)(v19 + v18) = 40;
    sub_20D6480(a1 + 2, a2);
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v20 = *(_QWORD *)(a2 + 16);
    v21 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v20 + 1;
    *(_BYTE *)(v21 + v20) = 41;
  }
  sub_20CFD70(a2);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v3 + 1;
  *(_BYTE *)(v4 + v3) = 32;
  ++*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v5 + 1;
  *(_BYTE *)(v6 + v5) = 123;
  v7 = (__int64 *)a1[4];
  v8 = &v7[a1[5]];
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v10 = (_BYTE *)*v7;
      v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      if ( v11 == sub_20CEB40 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(*v7, a2);
      else
        v11(a2, *v7);
      if ( (v10[9] & 0xC0) == 0x40 )
        goto LABEL_9;
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
      if ( v9 == sub_20CEB60 )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 72LL))(v10, a2);
LABEL_9:
        if ( v8 == ++v7 )
          break;
      }
      else
      {
        ++v7;
        v9(a2, (__int64)v10);
        if ( v8 == v7 )
          break;
      }
    }
  }
  sub_20CFD70(a2);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v12 + 1;
  *(_BYTE *)(v13 + v12) = 32;
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v15 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v15 + result) = 125;
  return result;
}
