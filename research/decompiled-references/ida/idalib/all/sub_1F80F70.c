__int64 __fastcall sub_1F80F70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 *v10; // r12
  __int64 *v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rax
  int v29; // esi
  unsigned int v30; // r12d
  __int64 v31; // r14
  __int64 *v32; // r12
  __int64 v33; // r13
  __int64 v34; // rsi

  sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 8));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(a1 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 16));
  result = *(unsigned __int8 *)(a2 + 8);
  switch ( *(_BYTE *)(a2 + 8) )
  {
    case 0:
    case 0x2E:
    case 0x31:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      result = sub_9B9C90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 32) != 0);
      if ( *(_QWORD *)(a2 + 32) )
        return sub_183F100(a1 + 24, **(_QWORD **)(a2 + 24));
      return result;
    case 1:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x1C:
    case 0x1E:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2D:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      return sub_1F6F430(a1, a2);
    case 2:
    case 0x1B:
    case 0x20:
    case 0x21:
    case 0x24:
    case 0x2B:
      return result;
    case 3:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(_BYTE *)(a2 + 32) == 0);
      v17 = *(_BYTE *)(a2 + 32);
      if ( v17 == -1 )
        goto LABEL_48;
      if ( !v17 )
      {
        v5 = *(_QWORD *)(a2 + 24);
        goto LABEL_9;
      }
      if ( v17 != 1 )
LABEL_48:
        abort();
      v18 = *(_QWORD *)(a1 + 16);
      v19 = sub_1F80CA0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 24), v13, v14, v15, v16);
      result = sub_9B9C90(v18, v19);
      break;
    case 4:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 48));
      v5 = 0;
      if ( !*(_QWORD *)(a2 + 32) )
        goto LABEL_9;
      goto LABEL_8;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x29:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 40));
      return sub_1F6F430(a1, a2);
    case 0x11:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      return sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 24));
    case 0x12:
    case 0x16:
    case 0x26:
    case 0x2F:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      v5 = 0;
      if ( *(_QWORD *)(a2 + 32) )
LABEL_8:
        v5 = **(_QWORD **)(a2 + 24);
      goto LABEL_9;
    case 0x19:
    case 0x1A:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      result = sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 24));
      v20 = a2 + 32 + 16LL * *(unsigned int *)(a2 + 24);
      if ( v20 != a2 + 32 )
      {
        v21 = a2 + 32;
        do
        {
          sub_9B9C90(*(_QWORD *)(a1 + 16), *(_QWORD *)(v21 + 8) != 0);
          v26 = *(_QWORD *)(v21 + 8);
          if ( v26 )
          {
            v27 = *(_QWORD *)(a1 + 16);
            v28 = sub_1F80CA0(*(_QWORD *)(a1 + 8), v26, v22, v23, v24, v25);
            sub_9B9C90(v27, v28);
          }
          v29 = *(_DWORD *)v21;
          v21 += 16;
          result = sub_1F6F570(*(_QWORD **)(a1 + 8), v29, *(_QWORD *)(a1 + 16));
        }
        while ( v20 != v21 );
      }
      return result;
    case 0x1D:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 32));
      result = *(_QWORD *)(a2 + 32);
      if ( (_DWORD)result )
      {
        v30 = 0;
        do
        {
          v31 = v30++;
          sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(v31 + a2 + 8LL * (unsigned int)result + 40));
          sub_183F100(a1 + 24, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v31));
          result = *(_QWORD *)(a2 + 32);
        }
        while ( v30 < (unsigned int)result );
      }
      return result;
    case 0x1F:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      v5 = *(_QWORD *)(a2 + 24);
      goto LABEL_9;
    case 0x25:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 32));
      result = *(_QWORD *)(a2 + 24);
      v10 = (__int64 *)(result + 8LL * *(_QWORD *)(a2 + 32));
      if ( (__int64 *)result != v10 )
      {
        v11 = *(__int64 **)(a2 + 24);
        do
        {
          v12 = *v11++;
          result = sub_183F100(a1 + 24, v12);
        }
        while ( v10 != v11 );
      }
      return result;
    case 0x2A:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 25));
      if ( *(_BYTE *)(a2 + 25) )
      {
        result = sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a2 + 24));
        if ( *(_BYTE *)(a2 + 24) )
        {
          v5 = *(_QWORD *)(a2 + 32);
LABEL_9:
          result = sub_183F100(a1 + 24, v5);
        }
      }
      else
      {
        v32 = (__int64 *)(a2 + 32);
        sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 28));
        result = *(unsigned int *)(a2 + 28);
        v33 = a2 + 32 + 8 * result;
        if ( a2 + 32 != v33 )
        {
          do
          {
            v34 = *v32++;
            result = sub_183F100(a1 + 24, v34);
          }
          while ( (__int64 *)v33 != v32 );
        }
      }
      break;
    case 0x2C:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 32));
      result = *(_QWORD *)(a2 + 24);
      v6 = (__int64 *)(result + 8LL * *(_QWORD *)(a2 + 32));
      if ( v6 != (__int64 *)result )
      {
        v7 = *(__int64 **)(a2 + 24);
        do
        {
          v8 = *v7++;
          result = sub_183F100(a1 + 24, v8);
        }
        while ( v6 != v7 );
      }
      return result;
    case 0x30:
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 16));
      sub_9B9C90(*(_QWORD *)(a1 + 16), **(_QWORD **)(a2 + 24) != 0);
      v9 = **(_QWORD **)(a2 + 24);
      if ( v9 )
        sub_183F100(a1 + 24, v9);
      sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 16));
      return sub_1F6F4D0(a1, (__int64 *)(*(_QWORD *)(a2 + 24) + 8LL), *(_QWORD *)(a2 + 32) - 1LL);
  }
  return result;
}
