__int64 __fastcall sub_7AF6C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // r13d
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 (__fastcall *v18)(); // rcx
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(); // rax

  v2 = a2 >> 1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 792);
  if ( !v4 || (unsigned int)v2 >= *(_DWORD *)(v4 - 4) )
    goto LABEL_36;
  v5 = *(_QWORD *)(v4 + 8 * v2);
  v6 = -v5;
  if ( v5 > 0 )
    v6 = v5;
  *(_BYTE *)(a1 + 996) |= v6 > 0xFFFFFFFFLL;
  if ( !(_DWORD)v6 )
  {
LABEL_36:
    v8 = *(_QWORD *)(a1 + 800);
    if ( v8 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          if ( v9 >= *(_DWORD *)(v8 - 4) )
            return v3;
          v11 = *(_QWORD *)(a1 + 792);
          v12 = *(_DWORD *)(v8 + 4LL * v9);
          LODWORD(v13) = 0;
          if ( v11 && v12 < *(_DWORD *)(v11 - 4) )
            v13 = *(_QWORD *)(v11 + 8LL * v12) >> 63;
          v14 = v13 + 2 * v12;
          v15 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 536LL);
          if ( v15 == sub_7C55E0 )
            break;
          if ( ((unsigned int (__fastcall *)(__int64, _QWORD))v15)(a1, v14) != -1 )
            goto LABEL_21;
LABEL_24:
          v18 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v18 == sub_7C5680 )
          {
            if ( *(_QWORD *)(a1 + 160) )
              goto LABEL_21;
            v19 = *(_QWORD *)(a1 + 24);
            if ( v10 >= *(_DWORD *)(*(_QWORD *)(v19 + 3296) + 24LL * (v14 >> 1)) )
              goto LABEL_21;
            goto LABEL_27;
          }
LABEL_28:
          if ( v10 >= ((unsigned int (__fastcall *)(__int64, _QWORD))v18)(a1, v14) )
            goto LABEL_21;
          v20 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v20 != sub_7C5680 )
          {
            v3 = v14;
            v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)()))v20)(a1, v14, sub_7C5680);
            v8 = *(_QWORD *)(a1 + 800);
            goto LABEL_18;
          }
          if ( *(_QWORD *)(a1 + 160) )
          {
            v3 = v14;
            v10 = 0;
            goto LABEL_21;
          }
          v19 = *(_QWORD *)(a1 + 24);
LABEL_27:
          v3 = v14;
          v10 = *(_DWORD *)(*(_QWORD *)(v19 + 3296) + 24LL * (v14 >> 1));
          v8 = *(_QWORD *)(a1 + 800);
LABEL_18:
          ++v9;
          if ( !v8 )
            return v3;
        }
        v16 = *(_QWORD *)(a1 + 160);
        if ( v16 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v16 + 880) + 4LL * (v14 >> 1));
          if ( v17 < *(_DWORD *)(v16 + 888) )
            goto LABEL_18;
          if ( (((unsigned __int8)v14 ^ (unsigned __int8)v17) & 1) == 0 )
            goto LABEL_18;
          v18 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v18 == sub_7C5680 )
            goto LABEL_18;
          goto LABEL_28;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v14) == -1 )
          goto LABEL_24;
LABEL_21:
        v8 = *(_QWORD *)(a1 + 800);
        ++v9;
      }
      while ( v8 );
    }
  }
  return v3;
}

