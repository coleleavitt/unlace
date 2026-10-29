unsigned __int64 __fastcall sub_730C0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        void (*a6)(void))
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // rsi
  __int64 v18; // rcx
  __int64 *v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned int v22; // eax
  unsigned __int64 v23; // r11
  bool v24; // r15
  unsigned __int8 *v25; // r15
  unsigned int v26; // eax
  unsigned __int8 *v27; // r15
  unsigned int v28; // eax
  unsigned __int8 *v29; // r15
  unsigned int v30; // eax
  unsigned __int8 *v31; // r15
  __int64 *v32; // r14
  unsigned __int8 *v33; // rsi
  unsigned __int8 v34; // r8
  unsigned __int64 v35; // r9
  unsigned int v36; // ecx
  unsigned int v37; // eax
  __int64 *v38; // rcx
  unsigned __int64 v39; // [rsp+0h] [rbp-E8h]
  _QWORD v40[4]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-70h]
  unsigned __int64 v43; // [rsp+A8h] [rbp-40h]

  v8 = a1 + a2;
  v9 = a1;
  v43 = __readfsqword(0x28u);
  if ( a2 <= 0 )
    v8 = a1;
  result = sub_72390(v40, a1, a2, a3, a4, a5);
  if ( result <= 0xFFFFFFFFFFFFFF88LL && result )
  {
    a6();
    v12 = a5 + 4;
    _RDI = (__int64 **)v40;
    v39 = (unsigned __int64)(a2 + 3) >> 2;
    while ( 1 )
    {
      v14 = v8 - v9;
      v9 += v39;
      v15 = (unsigned __int64)_RDI[4];
      if ( v14 < v39 )
        v9 = v8;
      if ( v9 < v15 )
        return -20;
      v16 = *_RDI;
      if ( *_RDI < _RDI[15] - 1 )
        return -20;
      __asm { tzcnt   r11, [rdi+40h] }
      v18 = *v16;
      v19 = v42;
      v20 = v9 - v15;
      v21 = (unsigned __int64)(v42 + 1);
      v22 = _R11;
      if ( (__int64)(v9 - v15) > 3 )
      {
        v23 = v9 - 3;
        while ( 1 )
        {
          if ( v21 <= (unsigned __int64)v16 )
          {
            v36 = v22;
            v22 &= 7u;
            v16 = (__int64 *)((char *)v16 - (v36 >> 3));
            v18 = *v16;
            v24 = v15 < v23;
          }
          else
          {
            if ( v19 == v16 )
              goto LABEL_19;
            v32 = (__int64 *)((char *)v16 - (v22 >> 3));
            if ( v32 < v19 )
            {
              v22 -= 8 * ((_DWORD)v16 - (_DWORD)v19);
              v18 = *(__int64 *)((char *)v16 - (unsigned int)((_DWORD)v16 - (_DWORD)v19));
              goto LABEL_19;
            }
            v16 = (__int64 *)((char *)v16 - (v22 >> 3));
            v24 = v15 < v23;
            v22 -= 8 * (v22 >> 3);
            v18 = *v32;
          }
          if ( v24 )
          {
            v15 += 4LL;
            v25 = (unsigned __int8 *)(v12 + 2 * ((unsigned __int64)(v18 << v22) >> 53));
            v26 = *v25 + v22;
            *(_BYTE *)(v15 - 4) = v25[1];
            v27 = (unsigned __int8 *)(v12 + 2 * ((unsigned __int64)(v18 << v26) >> 53));
            v28 = *v27 + v26;
            *(_BYTE *)(v15 - 3) = v27[1];
            v29 = (unsigned __int8 *)(v12 + 2 * ((unsigned __int64)(v18 << v28) >> 53));
            v30 = *v29 + v28;
            *(_BYTE *)(v15 - 2) = v29[1];
            v31 = (unsigned __int8 *)(v12 + 2 * ((unsigned __int64)(v18 << v30) >> 53));
            v22 = *v31 + v30;
            *(_BYTE *)(v15 - 1) = v31[1];
            if ( v22 <= 0x40 )
              continue;
          }
          goto LABEL_19;
        }
      }
      if ( (unsigned __int64)v16 >= v21 )
      {
        v22 = _R11 & 7;
        v18 = *(__int64 *)((char *)v16 - (_R11 >> 3));
      }
      else if ( v16 != v42 )
      {
        v37 = (unsigned int)_R11 >> 3;
        v38 = (__int64 *)((char *)v16 - ((unsigned int)_R11 >> 3));
        if ( v38 < v42 )
        {
          v37 = (_DWORD)v16 - (_DWORD)v42;
          v38 = (__int64 *)((char *)v16 - (unsigned int)((_DWORD)v16 - (_DWORD)v42));
        }
        v18 = *v38;
        v22 = _R11 - 8 * v37;
      }
LABEL_19:
      if ( v9 > v15 )
      {
        do
        {
          ++v15;
          v33 = (unsigned __int8 *)(v12 + 2 * ((unsigned __int64)(v18 << v22) >> 53));
          v34 = v33[1];
          LODWORD(v33) = *v33;
          *(_BYTE *)(v15 - 1) = v34;
          v22 += (unsigned int)v33;
        }
        while ( v9 != v15 );
      }
      v35 = (unsigned __int64)_RDI[4] + v20;
      _RDI[4] = (__int64 *)v35;
      if ( v35 != v9 )
        return -20;
      if ( &v41 == (__int64 *)++_RDI )
        return a2;
    }
  }
  return result;
}

