__int64 __fastcall sub_77F5C0(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rbx
  void *v13; // rdi
  _QWORD *v14; // rdi
  size_t v15; // rdx
  void *s; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  void *v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  int v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  _QWORD v23[9]; // [rsp+50h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 56) && (v3 = sub_77F420(a1, 0, 0), (_BYTE)v3) )
  {
    v18 = 1;
    s = v23;
    v5 = *(_QWORD *)(a1 + 56);
    v19 = nullptr;
    v20 = 0;
    v21 = 1065353216;
    v22 = 0;
    v23[0] = 0;
    v6 = v5 - 1;
    if ( v5 - 1 < 0 )
    {
      if ( a3 )
        *a3 = 0;
      v14 = v23;
      v15 = 8;
    }
    else
    {
      v7 = 0;
      v8 = 176 * v5 - 176;
      do
      {
        v9 = v8 + *(_QWORD *)(a1 + 48);
        v10 = *(_DWORD *)(v9 + 168);
        if ( (v10 & 2) == 0 )
        {
          if ( (v10 & 1) == 0 )
          {
            v3 = 0;
            goto LABEL_17;
          }
          *(_DWORD *)(v9 + 168) = v10 & 0xFFFFFFFE;
          if ( a2 )
          {
            v11 = *(_DWORD *)(v9 + 172) + 1;
            if ( v11 < *(_DWORD *)(a1 + 104) )
              v11 = *(_DWORD *)(a1 + 104);
            *(_DWORD *)(a1 + 104) = v11;
            v7 += sub_777860(a1, v6, v9, (__int64 *)&s);
          }
        }
        --v6;
        v8 -= 176;
      }
      while ( v6 != -1 );
      if ( a3 )
      {
        *a3 = v7;
        if ( v7 )
        {
          sub_39ADA0(0x46u, *(_QWORD *)(a1 + 32), -1);
          sub_774BB0(a1, 70, -1);
        }
      }
LABEL_17:
      v12 = v19;
      if ( v19 )
      {
        do
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          operator delete(v13, 0x10u);
        }
        while ( v12 );
      }
      v14 = s;
      v15 = 8 * v18;
    }
    memset(v14, 0, v15);
    v20 = 0;
    v19 = nullptr;
    if ( s != v23 )
      operator delete(s, 8 * v18);
  }
  else
  {
    return 0;
  }
  return v3;
}
