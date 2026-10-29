__int64 __fastcall sub_40A770(__int64 a1, unsigned int a2, __int64 a3, char a4, int a5, int a6)
{
  _QWORD *v6; // r12
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  int *v16; // rax
  int *v17; // r12
  __int64 v18; // rax
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = (_QWORD *)a3;
  LODWORD(a3) = 1;
  if ( a1 )
  {
    if ( (int)a2 <= 0 || v6 == nullptr )
    {
      sub_48B710(a1, (unsigned int)"illegal argument vector", 0, a4, a5, a6);
      LODWORD(a3) = 1;
    }
    else
    {
      if ( (a4 & 1) == 0 )
      {
        LOBYTE(a3) = (int)a2 <= 0;
        sub_47D740((unsigned int)"TclObjInvoke: called without TCL_INVOKE_HIDDEN", a2, a3, a4, a5, a6);
      }
      v8 = sub_409340(a1);
      a3 = 1;
      if ( v8 != 1 )
      {
        v10 = *(_QWORD *)(*v6 + 8LL);
        if ( !v10 )
          v10 = sub_47B3B0(*v6);
        v11 = *(_QWORD *)(a1 + 48);
        if ( v11
          && (v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v11 + 64))(*(_QWORD *)(a1 + 48), v10, a3)) != 0 )
        {
          v13 = *(_QWORD *)(v12 + 24);
          ++*(_DWORD *)(a1 + 320);
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *))(v13 + 32))(
                  *(_QWORD *)(v13 + 40),
                  a1,
                  a2,
                  v6);
          if ( v14 != 1 || (a4 & 4) != 0 || (*(_BYTE *)(a1 + 424) & 4) != 0 )
          {
            LODWORD(a3) = v14;
          }
          else
          {
            v16 = (int *)sub_46EEB0(a2, v6);
            ++*v16;
            v17 = v16;
            v18 = sub_47ACD0(v16, &v21);
            sub_479E00(a1, v18, v18, v21);
            v19 = *v17 - 1;
            v20 = *v17 == 1;
            *v17 = v19;
            if ( v19 < 0 || v20 )
              sub_47B120(v17);
            *(_DWORD *)(a1 + 424) &= ~4u;
            LODWORD(a3) = 1;
          }
        }
        else
        {
          sub_48B710(a1, (unsigned int)"invalid hidden command name \"", v10, (unsigned __int8)"\"", 0, v9);
          LODWORD(a3) = 1;
        }
      }
    }
  }
  return (unsigned int)a3;
}

