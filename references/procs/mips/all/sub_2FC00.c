__int64 __fastcall sub_2FC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_BYTE *, __int64),
        __int64 a7)
{
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  bool v14; // cl
  int v15; // esi
  __int64 v16; // r15
  __int64 byte; // rax
  __int64 dtype_size; // rax
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-1B8h]
  __int128 v23; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-198h]
  __int64 v25; // [rsp+28h] [rbp-190h]
  __int64 v26; // [rsp+30h] [rbp-188h]
  _BYTE v27[320]; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v28[8]; // [rsp+178h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  if ( a4 > 4 )
    return 0;
  v23 = -1;
  v12 = v27;
  v24 = -1;
  v25 = 0;
  v26 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v12 != v28 );
  if ( (int)decode_insn(&v23, a3, v28, 0, 0, a6, 0.0) <= 0 )
    return 0;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 104);
  if ( (unsigned __int16)v25 >= v15 && (unsigned __int16)v25 < *(int *)(v13 + 108) )
    v14 = (dword_598C0[a4] & *(_DWORD *)(*(_QWORD *)(v13 + 112) + 16LL * ((unsigned __int16)v25 - v15) + 8)) != 0;
  *(_BYTE *)a2 = v14;
  if ( v27[40 * a4 + 1] > 7u )
    return 0;
  switch ( v27[40 * a4 + 1] )
  {
    case 0:
    case 6:
      return 0;
    case 1:
      byte = sub_2F3D0(a1, a3, *(unsigned __int16 *)&v27[40 * a4 + 6], a6, a7);
      v16 = *(_QWORD *)(a2 + 8);
      goto LABEL_12;
    case 2:
    case 7:
      v16 = *(_QWORD *)&v27[40 * a4 + 16];
      byte = 0;
      *(_QWORD *)(a2 + 8) = v16;
      goto LABEL_12;
    case 3:
      if ( v27[40 * a4 + 32] )
      {
        v21 = sub_2F3D0(a1, a3, *(unsigned __int16 *)&v27[40 * a4 + 6], a6, a7);
        *(_QWORD *)(a2 + 8) = v21;
        v16 = v21;
        byte = 0;
      }
      else
      {
        v22 = sub_2F3D0(a1, a3, *(_DWORD *)&v27[40 * a4 + 24] & 0x1F, a6, a7);
        v20 = sub_2F3D0(a1, a3, (*(_QWORD *)&v27[40 * a4 + 24] >> 5) & 0x1F, a6, a7) + v22;
LABEL_20:
        *(_QWORD *)(a2 + 8) = v20;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v20;
        byte = 0;
        *(_QWORD *)(a2 + 8) = v16;
      }
LABEL_12:
      if ( v16 != -1 )
      {
        dtype_size = get_dtype_size((unsigned __int8)v27[40 * a4 + 5]);
        v19 = *(_QWORD *)(a2 + 8);
        if ( dtype_size == 1 )
        {
          byte = (unsigned __int8)get_byte(v19);
        }
        else if ( dtype_size == 2 )
        {
          byte = (unsigned __int16)get_word(v19);
        }
        else
        {
          byte = (unsigned int)get_dword(v19);
        }
      }
      *(_QWORD *)(a2 + 24) = byte;
      *(_DWORD *)(a2 + 52) = get_dtype_size((unsigned __int8)v27[40 * a4 + 5]);
      result = 1;
      break;
    case 4:
      v20 = *(_QWORD *)&v27[40 * a4 + 16] + sub_2F3D0(a1, a3, *(unsigned __int16 *)&v27[40 * a4 + 6], a6, a7);
      goto LABEL_20;
    case 5:
      v16 = *(_QWORD *)(a2 + 8);
      byte = *(_QWORD *)&v27[40 * a4 + 8];
      goto LABEL_12;
  }
  return result;
}
