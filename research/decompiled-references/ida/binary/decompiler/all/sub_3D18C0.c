unsigned __int64 __fastcall sub_3D18C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _DWORD *v4; // r13
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rax
  char v11; // [rsp+17h] [rbp-49h] BYREF
  int v12; // [rsp+18h] [rbp-48h] BYREF
  int v13; // [rsp+1Ch] [rbp-44h] BYREF
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+28h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 )
    {
      v4 = *(_DWORD **)(a3 + 40);
      v5 = *(__int16 *)(a3 + 28);
      v15 = 0;
      *(_DWORD *)(a1 + 40) = v5;
      v14 = 0;
      sub_3D04F0(a1, &v14, &v12, &v11, &v13, 0, v4);
      sub_3CA840(a1, (__int64)v4, v3, *(_DWORD *)(a1 + 40), &v14);
      v6 = v14;
      if ( v14 )
      {
        v7 = v15;
        if ( (_QWORD)v15 )
        {
          v8 = 0;
          do
          {
            v9 = (_QWORD *)(v6 + 24 * v8);
            if ( *v9 )
            {
              v9[1] = 0;
              qfree();
              v6 = v14;
            }
            ++v8;
          }
          while ( v7 != v8 );
        }
        *(_QWORD *)&v15 = 0;
        qfree();
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
