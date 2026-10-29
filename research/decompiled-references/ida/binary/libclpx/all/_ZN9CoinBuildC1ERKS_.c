// Alternative name is '_ZN9CoinBuildC2ERKS_'
void __fastcall CoinBuild::CoinBuild(CoinBuild *this, const CoinBuild *a2)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r13
  int v12; // r15d
  bool v13; // cc
  int v14; // eax
  int v15; // edi
  int v16; // eax
  void *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v2 = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  v3 = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = v2;
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0;
    v5 = *((_DWORD **)a2 + 3);
    if ( v2 > 0 )
    {
      v6 = 4 * (3 * v5[3] - 3);
      v7 = v6 + 70;
      v8 = v6 + 56;
      v9 = v6 + 63;
      if ( v9 >= 0 )
        v7 = v9;
      v10 = v7 >> 3;
      if ( v10 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v11 = nullptr;
        v12 = 0;
        do
        {
          v17 = (void *)operator new[](8 * v10);
          v18 = memcpy(v17, v5, v8);
          v19 = *((_QWORD **)this + 3);
          if ( v19 )
          {
            v13 = *(_DWORD *)this <= ++v12;
            *v11 = v18;
            v5 = *(_DWORD **)v5;
            if ( v13 )
              goto LABEL_13;
          }
          else
          {
            v13 = *(_DWORD *)this <= ++v12;
            *((_QWORD *)this + 3) = v18;
            v19 = v18;
            v5 = *(_DWORD **)v5;
            if ( v13 )
              goto LABEL_13;
          }
          v11 = v18;
          v14 = 4 * (3 * v5[3] - 3);
          v15 = v14 + 70;
          v8 = v14 + 56;
          v16 = v14 + 63;
          if ( v16 >= 0 )
            v15 = v16;
          v10 = v15 >> 3;
        }
        while ( v10 <= 0xFFFFFFFFFFFFFFFLL );
      }
      __cxa_throw_bad_array_new_length();
    }
    v19 = nullptr;
    v18 = nullptr;
LABEL_13:
    *((_QWORD *)this + 2) = v19;
    *((_QWORD *)this + 4) = v18;
  }
  else
  {
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
    *((_QWORD *)this + 4) = 0;
  }
}

