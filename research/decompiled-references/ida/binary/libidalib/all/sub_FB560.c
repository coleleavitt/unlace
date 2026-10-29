__int64 __fastcall sub_FB560(__int64 a1, int *a2, _DWORD *a3, __int64 a4, _DWORD *a5, char a6)
{
  int v8; // r13d
  int v9; // eax
  int v10; // eax
  int v11; // r12d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *); // [rsp+8h] [rbp-40h]

  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  a3[2] = a5[26];
  v9 = a5[25];
  a3[1] = 1;
  *a3 = v9;
  v10 = -1;
  v11 = *(_DWORD *)(a4 + 72);
  if ( a6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 224LL))(a1, 1) )
    {
      v10 = a5[24];
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 224LL))(a1, 2) )
    {
      v10 = a5[25];
    }
    else if ( (unsigned __int8)sub_13C350(*(_QWORD *)(a1 + 8)) )
    {
      v17 = (__int64 *)sub_FB160(a1, 0);
      if ( v17 )
      {
        v18 = *v17;
        v10 = 0;
        if ( v18 )
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 8LL))(
                  v18,
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 760LL));
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 8);
      v21 = v19;
      v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v19 + 344LL);
      v20 = sub_15D8D0(v19 + 440);
      v10 = v22(v21, *(_QWORD *)(v20 + 40), a5);
    }
  }
  a3[3] = v10;
  v13 = *(_DWORD *)(a1 + 72);
  a2[1] = 1;
  v14 = v13 - v8;
  a2[2] = v8;
  if ( v14 < 0 )
    v14 = 0;
  a2[3] = v11;
  *a2 = v14;
  v15 = *(__int16 *)(sub_15D8F0(*(_QWORD *)(a1 + 8) + 440LL) + 28);
  if ( v15 - v11 < 0 )
    goto LABEL_9;
  if ( v8 <= v15 - v11 )
  {
    v15 = a2[1] + v15 - v8;
LABEL_9:
    a2[3] = v15;
    goto LABEL_10;
  }
  v15 = a2[3];
LABEL_10:
  if ( v15 > *a2 )
    *a2 = v15;
  return 1;
}

