__int64 __fastcall sub_264F0(
        __int64 a1,
        int a2,
        __int64 *a3,
        _DWORD *a4,
        _DWORD *a5,
        char *a6,
        int a7,
        _DWORD *a8,
        __int64 a9,
        _DWORD *a10)
{
  __int64 v14; // rdi
  unsigned int v15; // edx
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rdi
  char *v20; // rcx
  unsigned int v21; // r12d
  char *v22; // r14
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rdi
  char *v26; // rcx
  char *v28; // [rsp+10h] [rbp-88h] BYREF
  __int128 v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 v31; // [rsp+34h] [rbp-64h]
  unsigned __int16 v32; // [rsp+38h] [rbp-60h]
  unsigned __int16 v33; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int16 v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  unsigned int v36; // [rsp+48h] [rbp-50h]
  unsigned int v37; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v38; // [rsp+50h] [rbp-48h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *(_WORD *)a6 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
  {
    *(_OWORD *)(a9 + 16) = 0;
    *(_OWORD *)a9 = 0;
    *(_OWORD *)(a9 + 28) = 0;
  }
  if ( a10 )
    *a10 = 0;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 1;
  if ( *(_BYTE *)(v14 + 1352) )
  {
    if ( (unsigned __int8)sub_227B0(v14, v14 + 1352, (a2 & 0xFFFFFFu) - 1, (__int64)&v30) )
    {
      if ( a10 )
        *a10 = v35;
      if ( (unsigned __int8)sub_232E0(*(_QWORD *)(a1 + 8), v36, a3, a4, 0) )
      {
        if ( a5 )
          *a5 = v30;
        v17 = v37;
        v28 = 0;
        v29 = 0;
        v18 = qvector_reserve();
        v19 = *(_QWORD *)(a1 + 8);
        v28 = (char *)v18;
        sub_230E0(v19, v17, (__int64 *)&v28);
        v20 = (char *)s1;
        if ( (_QWORD)v29 )
          v20 = v28;
        sub_25360(a6, a7, a8, v20);
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        if ( a9 )
        {
          v21 = v38;
          *(_QWORD *)a9 = v31 | ((v32 | ((v33 | ((unsigned __int64)v34 << 16)) << 16)) << 16);
          if ( v21 )
          {
            v22 = *(char **)(a9 + 8);
            if ( v22 )
            {
              v23 = *(_DWORD *)(a9 + 16);
              v29 = 0;
              v28 = 0;
              v24 = qvector_reserve();
              v25 = *(_QWORD *)(a1 + 8);
              v28 = (char *)v24;
              sub_230E0(v25, v21, (__int64 *)&v28);
              v26 = (char *)s1;
              if ( (_QWORD)v29 )
                v26 = v28;
              sub_25360(v22, v23, 0, v26);
              if ( v28 )
              {
                *(_QWORD *)&v29 = 0;
                qfree();
              }
            }
          }
          *(_DWORD *)(a9 + 28) = 0;
          *(_DWORD *)(a9 + 40) = 0;
        }
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
  return v15;
}
