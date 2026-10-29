__int64 __fastcall sub_807110(__int64 a1, __int64 a2)
{
  int *v3; // rax
  int v4; // eax
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax

  if ( !*(_WORD *)(a2 + 4)
    && ((v3 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v4 = -1) : (v4 = *v3), *(_DWORD *)(a1 + 12) == v4) )
  {
    v6 = *(_QWORD **)(a1 + 64);
    if ( v6 )
    {
      v7 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
      {
        v9 = (unsigned int)(3 * v7 + 1) >> 1;
        v10 = 16 * v9 + 8;
        if ( 16 * (int)v7 + 8 >= (unsigned int)v10 || (unsigned int)v7 >= v9 )
          JUMPOUT(0x11D4CA);
        v11 = (unsigned int *)sub_186B300(v6 - 1, v10);
        v6 = v11 + 2;
        *v11 = v9;
        v12 = v11[1];
        *(_QWORD *)(a1 + 64) = v6;
        v8 = &v6[2 * v12];
      }
      else
      {
        v8 = &v6[2 * v7];
      }
    }
    else
    {
      v13 = (_QWORD *)sub_186B270(0x28u);
      v6 = v13 + 1;
      *v13 = 2;
      *(_QWORD *)(a1 + 64) = v13 + 1;
      v8 = v13 + 1;
    }
    *v8 = a2;
    *((_DWORD *)v8 + 2) = 0;
    ++*((_DWORD *)v6 - 1);
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 480LL))(*(_QWORD *)(a1 + 112), a2);
    return 1;
  }
}

