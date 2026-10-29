__int64 __fastcall sub_43C390(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  int v5; // edx
  unsigned int v6; // eax
  int v7; // r15d
  __int64 v8; // r12
  int v9; // eax
  void *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rax

  v4 = *(_DWORD *)(a3 + 216);
  v5 = *(_DWORD *)(a3 + 220);
  v6 = v4;
  if ( v5 > (int)v4 )
  {
    v11 = *(_QWORD *)(a3 + 208);
    v8 = (int)v4;
  }
  else
  {
    v7 = 2 * v5;
    v8 = (int)v4;
    v9 = 32 * v5;
    if ( *(_DWORD *)(a3 + 224) )
    {
      v11 = sub_40FC10(*(void **)(a3 + 208), v9);
      *(_QWORD *)(a3 + 208) = v11;
    }
    else
    {
      v10 = (void *)sub_40FB00(v9);
      memcpy(v10, *(const void **)(a3 + 208), 16LL * (int)v4);
      v11 = (__int64)v10;
      *(_QWORD *)(a3 + 208) = v10;
      *(_DWORD *)(a3 + 224) = 1;
    }
    v6 = *(_DWORD *)(a3 + 216);
    *(_DWORD *)(a3 + 220) = v7;
  }
  *(_DWORD *)(a3 + 216) = v6 + 1;
  v12 = (_QWORD *)(v11 + 16 * v8);
  v12[1] = a1;
  *v12 = a2;
  return v4;
}

