/* switch_table.c — forces GCC to emit a jump table (8 dense cases). */

__attribute__((noinline))
int dispatch(int x) {
    switch (x) {
    case 0: return 10;
    case 1: return 21;
    case 2: return 32;
    case 3: return 43;
    case 4: return 54;
    case 5: return 65;
    case 6: return 76;
    case 7: return 87;
    default: return -1;
    }
}

int main(void) {
    int sum = 0;
    for (int i = 0; i < 8; i++)
        sum += dispatch(i);
    return sum & 0xff;
}
