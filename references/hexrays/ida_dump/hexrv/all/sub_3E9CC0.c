__int64 __fastcall sub_3E9CC0(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int8 *v6; // r13
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_DWORD *, unsigned int); // rax
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_DWORD *, unsigned int); // rax
  int v22; // ecx
  int v23; // esi
  __int64 v24; // r15
  int v25; // r14d
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax

  v4 = (int)a2;
  v5 = 40LL * (int)a2;
  v6 = (unsigned __int8 *)(a1 + v5 + 64);
  switch ( *(_BYTE *)(a1 + v5 + 65) )
  {
    case 1:
    case 3:
      v8 = *(_DWORD **)(a1 + 832);
      v9 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 70);
      v10 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v8 + 168LL);
      if ( v10 != sub_3E48E0 )
        return v10(v8, v9);
      if ( (unsigned int)v9 <= 0x1F )
      {
        return (unsigned int)(v8[88] + v8[20] * v9);
      }
      else
      {
        v11 = v8[173];
        if ( v11 && (unsigned int)(v9 - 32) <= 0x1F )
          return (unsigned int)(v8[120] + v11 * (v9 - 32));
        else
          return (unsigned int)-1;
      }
    case 2:
      v13 = *(_QWORD *)(a1 + 832);
      v14 = *(_QWORD *)(v13 + 712);
      if ( !v14 )
        goto LABEL_36;
      v12 = *(_DWORD *)(*(_QWORD *)(v13 + 704) + 4 * v14 - 4);
      *(_QWORD *)(v13 + 712) = v14 - 1;
      v15 = *(_QWORD *)(a1 + 40LL * (int)a2 + 80);
      if ( *(_WORD *)(a1 + 48) == 162 )
        sub_3E9BD0(a1, v15, v12);
      else
        sub_3E98F0(a1, v6, *(_QWORD *)(a1 + 40 * v4 + 80), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v12, a4);
      return v12;
    case 4:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = *(_QWORD *)(v17 + 712);
      if ( !v18 )
        goto LABEL_36;
      v12 = *(_DWORD *)(*(_QWORD *)(v17 + 704) + 4 * v18 - 4);
      *(_QWORD *)(v17 + 712) = v18 - 1;
      v19 = *(_DWORD **)(a1 + 832);
      v20 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 70);
      v21 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
      if ( v21 == sub_3E48E0 )
      {
        v22 = v19[20];
        if ( (unsigned int)v20 > 0x1F )
        {
          v33 = v19[173];
          if ( v33 && (unsigned int)(v20 - 32) <= 0x1F )
          {
            v25 = v19[120] + v33 * (v20 - 32);
            v24 = v25;
          }
          else
          {
            v24 = -1;
            v25 = -1;
          }
        }
        else
        {
          v23 = v19[88] + v22 * v20;
          v24 = v23;
          v25 = v23;
        }
      }
      else
      {
        v34 = v21(v19, v20);
        v24 = v34;
        v25 = v34;
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
      }
      sub_3E98F0(a1, v6, *(_QWORD *)(a1 + 40 * v4 + 80), v22, v12, a4);
      sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v24, (int)v12, (int)v12, 0);
      sub_3E6F70(*(_QWORD *)(a1 + 832), v25);
      return v12;
    case 5:
      v26 = *(_BYTE *)(a1 + 40LL * (int)a2 + 69);
      if ( v26 > 2u && v26 != 7 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE5Fu, a2, a4);
        BUG();
      }
      v27 = *(_QWORD *)(a1 + 832);
      v28 = *(_QWORD *)(v27 + 712);
      if ( !v28 )
        goto LABEL_36;
      v12 = *(_DWORD *)(*(_QWORD *)(v27 + 704) + 4 * v28 - 4);
      *(_QWORD *)(v27 + 712) = v28 - 1;
      v29 = *(_QWORD *)(a1 + 40LL * (int)a2 + 72);
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 48) - 1 < 2 )
        v29 = *(_QWORD *)(a1 + 40LL * (int)a2 + 72) << 12;
      v30 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
      if ( v30 == 8 )
        v29 = (int)v29;
      sub_3E98F0(a1, v6, v29, v30, v12, a4);
      return v12;
    case 7:
      if ( !a3 )
        return (unsigned int)-1;
      v31 = *(_QWORD *)(a1 + 832);
      v32 = *(_QWORD *)(v31 + 712);
      if ( !v32 )
LABEL_36:
        sub_3E4E50(a4, a1, a2);
      v12 = *(_DWORD *)(*(_QWORD *)(v31 + 704) + 4 * v32 - 4);
      *(_QWORD *)(v31 + 712) = v32 - 1;
      sub_3E9B00(a1, *(_QWORD *)(a1 + 40LL * (int)a2 + 80), a2, v12, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return v12;
    default:
      return (unsigned int)-1;
  }
}
