__int64 __fastcall sub_252B40(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int v3; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h]
  __int64 v9; // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+20h] [rbp-88h]
  __int64 v11; // [rsp+28h] [rbp-80h]
  _DWORD *v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  unsigned __int64 v16; // [rsp+88h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) == 65 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = *(_QWORD *)(v1 + 432) + 104LL * *(int *)(a1 + 32);
    v3 = *(_DWORD *)(v2 + 24);
    if ( (v3 & 0x8000) != 0 )
      return 1;
    if ( (v3 & 0x100) != 0 )
    {
      if ( *(_QWORD *)(v2 + 40) && !strcmp(*(const char **)(v2 + 32), "this") )
        return 1;
      if ( *(_DWORD *)(v1 + 72) == 128 && *(_DWORD *)v2 == 3 )
      {
        sub_CD670((__int64)&v7, *(_QWORD *)(v1 + 1496), 0x80u);
        if ( v13 )
        {
          v5 = v12;
          v6 = *(_DWORD *)(v2 + 8);
          if ( *(_DWORD *)v2 == 4 )
            v6 = (unsigned __int16)v6;
          if ( *v12 == v6 )
          {
            if ( v14 )
            {
              v15 = 0;
              qfree(v14);
              v5 = v12;
            }
            if ( v5 )
            {
              v13 = 0;
              qfree(v5);
            }
            if ( v10 )
            {
              v11 = 0;
              qfree(v10);
            }
            if ( v8 )
            {
              v9 = 0;
              qfree(v8);
            }
            return 1;
          }
        }
        if ( v14 )
        {
          v15 = 0;
          qfree(v14);
        }
        if ( v12 )
        {
          v13 = 0;
          qfree(v12);
        }
        if ( v10 )
        {
          v11 = 0;
          qfree(v10);
        }
        if ( v8 )
        {
          v9 = 0;
          qfree(v8);
        }
      }
    }
  }
  return 0;
}
