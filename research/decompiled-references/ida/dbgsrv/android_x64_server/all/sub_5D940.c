/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D940
// Address: 0x000000000005D940

//----- (000000000005D940) ----------------------------------------------------
__int64 __fastcall sub_5D940(_QWORD *a1, __int64 a2, int a3, __int64 (__fastcall ***a4)(_QWORD, __int64, const char *))
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool v9; // cc
  unsigned __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // r15d
  int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // r14
  const char *v19; // rdx
  _QWORD v23[3]; // [rsp+28h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-98h]
  unsigned __int64 v25; // [rsp+48h] [rbp-90h]
  void *v26[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+78h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v31; // [rsp+90h] [rbp-48h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v23[0] = &off_147128;
  v23[1] = a1;
  v4 = *(_QWORD *)(a2 + 24);
  v23[2] = v4;
  v24 = 0;
  v5 = *(_QWORD *)(a2 + 56);
  v25 = v5;
  v27 = 0;
  *(_OWORD *)v26 = 0;
  v28 = 0;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v6 = a1[14];
    v7 = *(_QWORD *)(a1[30] + 488LL) - *(_QWORD *)(a1[30] + 480LL);
    if ( a2 + 64 >= v6 && a2 + 64 < (a1[15] << 6) + v6 )
    {
      v8 = *(_QWORD *)(a2 + 88);
      if ( v8 < v7 && v8 >= v4 )
        v7 = *(_QWORD *)(a2 + 88);
    }
    v9 = v7 <= v4;
    v10 = v7 - v4;
    if ( !v9 )
    {
      if ( *(_QWORD *)(a2 + 32) < v10 )
        v10 = *(_QWORD *)(a2 + 32);
      if ( !v5 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  v10 = 0;
  if ( v5 )
LABEL_13:
    v10 /= v5;
LABEL_14:
  v24 = v10;
  v11 = 0;
  do
  {
    v12 = 0;
    if ( !sub_5DCE0((__int64)v23, &v29) )
      break;
    if ( v11 )
    {
      v13 = *(__int16 *)(v29 + 54);
      v14 = *(_DWORD *)(v29 + 48);
      v15 = *(_QWORD *)(v29 + 56);
      if ( v13 > -16 )
      {
        if ( (unsigned __int16)v13 != 65521 && (_WORD)v13 )
        {
LABEL_20:
          if ( v14 && (*(_BYTE *)(v29 + 52) & 0xFu) - 1 <= 1 )
          {
            v16 = 0;
            if ( qword_155778 != -1 )
              v16 = qword_155778;
            *(_OWORD *)ptr = 0;
            v31 = 0;
            v17 = a1 + 40;
            if ( a3 != 1 )
            {
              v17 = a1 + 44;
              if ( a3 != 2 )
              {
                if ( !(_BYTE)under_debugger )
                  interr(20086);
                BUG();
              }
            }
            sub_57CE0((__int64)a1, (__int64)ptr, v17, v14);
            v18 = v15 - v16;
            v19 = s1;
            if ( ptr[1] )
              v19 = (const char *)ptr[0];
            v12 = (**a4)(a4, v18, v19);
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              v31 = 0;
            }
          }
        }
      }
      else if ( (unsigned __int16)v13 != 65280 && (unsigned __int16)v13 != 65311 )
      {
        goto LABEL_20;
      }
    }
    --v11;
  }
  while ( !v12 );
  v23[0] = &off_147128;
  if ( v26[0] )
  {
    sub_5BEB0((__int64 *)v26, 0);
    qfree(v26[0]);
    v26[0] = nullptr;
    *(_QWORD *)&v27 = 0;
  }
  return v12;
}
// 147128: using guessed type __int64 (__fastcall *off_147128)();
// 155778: using guessed type __int64 qword_155778;
// 158B40: using guessed type __int64 under_debugger;
