__int64 __fastcall sub_25520(__int64 a1, int a2, char *a3, int a4, _DWORD *a5, __int64 *a6, _DWORD *a7, _DWORD *a8)
{
  __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 v15; // rax
  __int64 v16; // rdi
  char *v17; // rcx
  unsigned int v19; // [rsp+4h] [rbp-94h]
  char *v20; // [rsp+10h] [rbp-88h] BYREF
  __int128 v21; // [rsp+18h] [rbp-80h]
  _DWORD v22[10]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 )
    *(_WORD *)a3 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 1;
  if ( *(_BYTE *)(v12 + 1592) )
  {
    if ( (unsigned __int8)sub_227B0(v12, v12 + 1592, (a2 & 0xFFFFFFu) - 1, (__int64)v22) )
    {
      v20 = 0;
      v19 = v22[1];
      v21 = 0;
      v15 = qvector_reserve();
      v16 = *(_QWORD *)(a1 + 8);
      v20 = (char *)v15;
      sub_230E0(v16, v19, (__int64 *)&v20);
      v17 = (char *)s1;
      if ( (_QWORD)v21 )
        v17 = v20;
      sub_25360(a3, a4, a5, v17);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      if ( (unsigned __int8)sub_232E0(*(_QWORD *)(a1 + 8), v22[2], a6, a7, 0) )
      {
        if ( a8 )
          *a8 = v22[0];
        return 0;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
    else
    {
      return (unsigned int)-2147024883;
    }
  }
  return v13;
}
