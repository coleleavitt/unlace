/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4560B0
// Address: 0x004560B0

//----- (004560B0) --------------------------------------------------------
bool __stdcall sub_4560B0(char *a1, void **a2)
{
  _DWORD *v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // esi
  int v5; // eax
  int v6; // edi
  bool v7; // zf
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // eax
  void *v11; // ecx
  void *v12; // eax
  bool v13; // bl
  _BYTE *v15; // [esp+10h] [ebp-30h] BYREF
  unsigned int v16; // [esp+14h] [ebp-2Ch]
  void *v17; // [esp+18h] [ebp-28h]
  struct _RTL_CRITICAL_SECTION *v18; // [esp+1Ch] [ebp-24h]
  int v19; // [esp+20h] [ebp-20h]
  const char *v20; // [esp+24h] [ebp-1Ch]
  int v21; // [esp+28h] [ebp-18h] BYREF
  char *v22; // [esp+2Ch] [ebp-14h] BYREF
  void *v23; // [esp+30h] [ebp-10h]
  int v24; // [esp+3Ch] [ebp-4h]
  void *v25; // [esp+48h] [ebp+8h]
  void *v26; // [esp+4Ch] [ebp+Ch]

  if ( dword_4B7120 )
  {
    v4 = lpCriticalSection;
  }
  else
  {
    v3 = sub_4627C2(8u);
    v3[1] = GetCurrentThreadId();
    *v3 = -1;
    dword_4B7120 = (int)v3;
    v4 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u);
    InitializeCriticalSection(v4);
    lpCriticalSection = v4;
  }
  v18 = v4;
  if ( v4 )
    EnterCriticalSection(v4);
  v24 = 0;
  v5 = sub_471DF6((int)a2, &v22, &v21, a1);
  v6 = v5;
  v19 = v5;
  if ( v21 )
  {
    v7 = v5 == 0;
    if ( v5 )
      goto LABEL_21;
    if ( a2 )
    {
      v8 = nullptr;
      v20 = v22;
      v26 = nullptr;
      v15 = nullptr;
      v25 = nullptr;
      v16 = 0;
      v23 = nullptr;
      v17 = nullptr;
      LOBYTE(v24) = 1;
      if ( v22 )
      {
        v9 = strlen(v22);
        v10 = v9 + 1;
        if ( v9 != -1 )
        {
          v8 = sub_453B00((int)&v15, nullptr, v9 + 1, 1u);
          v10 = v9 + 1;
          v15 = v8;
        }
        v16 = v10;
        sub_464310((unsigned int)v8, (unsigned int)v20, v9);
        v15[v9] = 0;
        v6 = v19;
        v23 = v17;
        v25 = (void *)v16;
        v26 = v15;
      }
      v11 = *a2;
      v12 = nullptr;
      LOBYTE(v24) = 2;
      v15 = nullptr;
      v16 = 0;
      v17 = nullptr;
      if ( v11 )
      {
        a2[1] = nullptr;
        sub_453A20(v11);
        v12 = v15;
        a2[2] = nullptr;
      }
      *a2 = v26;
      a2[1] = v25;
      a2[2] = v23;
      LOBYTE(v24) = 4;
      if ( v12 )
      {
        v16 = 0;
        sub_453A20(v12);
      }
      LOBYTE(v24) = 0;
    }
    sub_46C918(v22);
  }
  else
  {
    v6 = 1;
  }
  v7 = v6 == 0;
LABEL_21:
  v13 = v7;
  v24 = 5;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v13;
}
// 4B7120: using guessed type int dword_4B7120;
